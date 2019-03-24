// public
void saten_load_sprite(saten_sprite **sprite, char *filename)
{
    *sprite = (saten_sprite*) malloc(sizeof(saten_sprite));
    if (*sprite == NULL)
        saten_errhandler(7);
    memset(*sprite, 0, sizeof(saten_sprite));
    (*sprite)->srf = IMG_Load(filename);
    (*sprite)->target = (SDL_Rect*) malloc(sizeof(SDL_Rect));
    if ((*sprite)->target == NULL)
        saten_errhandler(7);
    (*sprite)->target->x = 0;
    (*sprite)->target->y = 0;
    (*sprite)->target->w = (*sprite)->srf->w;
    (*sprite)->target->h = (*sprite)->srf->h;

}

// public
void saten_set_texture(saten_sprite *sprite)
{
    sprite->texture = SDL_CreateTextureFromSurface(saten_ren, sprite->srf);
    if (sprite->texture == NULL)
        saten_errhandler(14);
}

// public
void saten_draw_sprite(saten_sprite *sprite, int tile_id, int x, int y,
        double ang, bool stretch)
{
    int r;
    SDL_Point rotation_center;
    SDL_Point *rcenptr;
    SDL_Rect *targetptr = NULL;
    if (sprite->centered) { // draw pos is center of sprite
        sprite->target->x = x - sprite->target->w/2;
        sprite->target->y = y - sprite->target->h/2;
        rotation_center.x = x;
        rotation_center.y = y;
        rcenptr = &rotation_center;
    } else { // top-left corner is draw pos
        sprite->target->x = x;
        sprite->target->y = y;
        rcenptr = NULL;
    }
    if (!stretch)
        targetptr = sprite->target;
    if (saten_target_layer == NULL) { // copy to renderer
        if (ang < 0) {  // no rotation
            if (sprite->tile) // use sprite from sheet
                r = SDL_RenderCopy(saten_ren, sprite->texture,
                        &sprite->tile[tile_id], targetptr);
            else // use whole texture
                r = SDL_RenderCopy(saten_ren, sprite->texture, NULL,
                        targetptr);
        } else {
            // rotate sprite
            if (sprite->tile)
                r = SDL_RenderCopyEx(saten_ren, sprite->texture,
                        &sprite->tile[tile_id], targetptr, ang, rcenptr,
                        SDL_FLIP_NONE);
            else // whole texture
                r = SDL_RenderCopyEx(saten_ren, sprite->texture, NULL,
                        targetptr, ang, rcenptr, SDL_FLIP_NONE);
        }
    } else { // blit onto layer
        //TODO add rotation ?
        if (sprite->tile)
            r = SDL_BlitScaled(sprite->srf, &sprite->tile[tile_id],
                        saten_target_layer->srf, targetptr);
        else
            r = SDL_BlitScaled(sprite->srf, NULL, saten_target_layer->srf,
                        targetptr);
    }
    if (r < 0)
        saten_errhandler(16);
}

// public
void saten_copy_sprite(saten_sprite **sprite_out, saten_sprite *sprite_in)
{
    //FIXME pixel data is not a copy! copy manually..
    *sprite_out = (saten_sprite*) malloc(sizeof(saten_sprite));
    if (*sprite_out == NULL)
        saten_errhandler(7);
    memset(*sprite_out, 0, sizeof(saten_sprite));
    (*sprite_out)->srf = SDL_CreateRGBSurfaceWithFormatFrom(
            sprite_in->srf->pixels, sprite_in->srf->w, sprite_in->srf->h,
            sprite_in->srf->format->BitsPerPixel, sprite_in->srf->pitch,
            sprite_in->srf->format->format);
    if ((*sprite_out)->srf == NULL)
        saten_errhandler(15);
    (*sprite_out)->copy = true;
}

// public
void saten_set_target_layer(saten_layer *lay)
{
    saten_target_layer = lay;
}

// public
void saten_layer_set_clip_area(saten_layer *lay, int x, int y, int w, int h)
{
    if (lay->clip_area == NULL) {
        // allocate fresh rect
        lay->clip_area = (SDL_Rect*) malloc(sizeof(SDL_Rect));
        if (lay->clip_area == NULL)
            saten_errhandler(7);
    }
    lay->clip_area->x = x;
    lay->clip_area->y = y;
    lay->clip_area->w = w;
    lay->clip_area->h = h;

    SDL_SetClipRect(lay->srf, lay->clip_area);
}

// public
void saten_layer_reset_clip_area(saten_layer *lay)
{
    if (lay->clip_area != NULL)
        free (lay->clip_area);
    lay->clip_area = NULL;
}

// public
void saten_create_layer(saten_layer **lay, int width, int height) {
    if (*lay != NULL)
        saten_errhandler(13);
    *lay = (saten_layer*) malloc(sizeof(saten_layer));
    if (*lay == NULL)
        saten_errhandler(7); 
    memset(*lay, 0, sizeof(saten_layer));

    // setup surface
    //TODO
    SDL_Surface* surface = NULL;
    int32_t rmask, gmask, bmask, amask;
#if SDL_BYTEORDER == SDL_BIG_ENDIAN
    rmask = 0xff000000;
    gmask = 0x00ff0000;
    bmask = 0x0000ff00;
    amask = 0x000000ff;
#else
    rmask = 0x000000ff;
    gmask = 0x0000ff00;
    bmask = 0x00ff0000;
    amask = 0xff000000;
#endif
    surface = SDL_CreateRGBSurface(0, width, height, 32, rmask, gmask,
            bmask, amask);
    if (surface == NULL)
        saten_errhandler(17);
    (*lay)->srf = surface;
    (*lay)->flag = true;
    
    //
    saten_litem *elem = (saten_litem*) malloc(sizeof(saten_litem));
    if (elem == NULL)
        saten_errhandler(7); 
    memset(elem, 0, sizeof(saten_litem));
    elem->current = (void*) *lay;
    saten_list_insert(saten_list_layer, elem);
}

// public
void saten_destroy_layer(saten_layer *lay)
{
    saten_litem* eptr = NULL;
    saten_list_search(saten_list_layer, NULL, &eptr, (void*)lay);
    SDL_FreeSurface(lay->srf);
    free(lay->clip_area);
    saten_list_remove(saten_list_layer, eptr);
    free(lay);
}

// public
void saten_set_tiles(saten_sprite *sprite, int num_h, int num_v)
{
    int tile_w, tile_h, size;
    tile_w = sprite->srf->w / num_h;
    tile_h = sprite->srf->h / num_v;
    size = num_h * num_v;
    SDL_Rect *rects = (SDL_Rect*) malloc(sizeof(SDL_Rect)*size);
    if (rects == NULL)
        saten_errhandler(7);
    for (int i = 0, k = 0; i < num_v; i++) {
        for (int j= 0; j < num_h; j++) {
            //SDL_Rect rect = { j*tile_w, i*tile_h, tile_w, tile_h };
            rects[k] = (SDL_Rect) { j*tile_w, i*tile_h, tile_w, tile_h };
            k++;
        }
    }
    sprite->tile = rects;
    sprite->target->w = tile_w;
    sprite->target->h = tile_h;
}

// public
void saten_sprite_scale(saten_sprite *sprite, float scale)
{
    if (sprite->tile) { // spritesheet
        sprite->target->w = sprite->tile->w * scale;
        sprite->target->h = sprite->tile->h * scale;
    } else { // entire sprite
        sprite->target->w = sprite->srf->w * scale;
        sprite->target->h = sprite->srf->h * scale;
    }
}

// public
void saten_destroy_sprite(saten_sprite *sprite)
{
    if (sprite->srf)
        SDL_FreeSurface(sprite->srf);
    if (sprite->texture)
        SDL_DestroyTexture(sprite->texture);
    if (sprite->tile)
        free(sprite->tile);
    free(sprite);
    sprite = NULL;
}

// public
void saten_combine_layers(void)
{
    if (saten_list_layer->num <= 1) // requires 2 layers min
        return;

    saten_fptr_list_action fptr = saten_layer_blit;
    saten_list_traverse(saten_list_layer, fptr);

}

// private
void saten_layer_blit(void *item, int i, int num)
{
    saten_layer *layer = (saten_layer*) item;
    if (layer->flag) { // ignore layers with flag set to off
        SDL_BlitSurface(layer->srf, NULL, saten_layer0->srf,
                saten_layer0->clip_area);
    }
    if (i == num-1) { // handling last element in list
        SDL_Texture *zt = SDL_CreateTextureFromSurface(saten_ren,
                saten_layer0->srf);
        if (zt == NULL) {
            saten_errhandler(18);
            return;
        }
        if (SDL_RenderCopy(saten_ren, zt, NULL, NULL) == -1)
            saten_errhandler(19);
        SDL_DestroyTexture(zt);
    }
}
