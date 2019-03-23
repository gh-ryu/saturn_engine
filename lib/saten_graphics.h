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

void saten_set_texture(saten_sprite *sprite)
{
    sprite->texture = SDL_CreateTextureFromSurface(saten_ren, sprite->srf);
    if (sprite->texture == NULL)
        saten_errhandler(14);
}

void saten_copy_sprite(saten_sprite **sprite_out, saten_sprite *sprite_in)
{
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
}

void saten_set_target_layer(saten_layer **lay)
{
    saten_target_layer = *lay;
}

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

void saten_layer_reset_clip_area(saten_layer *lay)
{
    if (lay->clip_area != NULL)
        free (lay->clip_area);
    lay->clip_area = NULL;
}

void saten_create_layer(saten_layer **lay) {
    if (*lay != NULL)
        saten_errhandler(13);
    *lay = (saten_layer*) malloc(sizeof(saten_layer));
    if (*lay == NULL)
        saten_errhandler(7); 
    memset(*lay, 0, sizeof(saten_layer));

    // setup surface
    //TODO
    //SDL_Surface* surface = NULL;

    
    //
    saten_litem *elem = (saten_litem*) malloc(sizeof(saten_litem));
    if (elem == NULL)
        saten_errhandler(7); 
    memset(elem, 0, sizeof(saten_litem));
    elem->current = (void*) *lay;
    saten_list_insert(saten_list_layer, elem);
}

void saten_destroy_layer(saten_layer *lay)
{
    saten_litem* eptr = NULL;
    saten_list_search(saten_list_layer, NULL, &eptr, (void*)lay);
    SDL_FreeSurface(lay->srf);
    free(lay->clip_area);
    saten_list_remove(saten_list_layer, eptr);
    free(lay);
}

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
