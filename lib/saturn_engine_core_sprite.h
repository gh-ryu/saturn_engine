// public
saten_sprite* saten_sprite_load(char *filename)
{
    saten_sprite* sprite = (saten_sprite*) malloc(sizeof(saten_sprite));
    if (sprite == NULL)
        saten_errhandler(7);
    memset(sprite, 0, sizeof(saten_sprite));
    sprite->srf = IMG_Load(filename);
    sprite->target = (SDL_Rect*) malloc(sizeof(SDL_Rect));
    if (sprite->target == NULL)
        saten_errhandler(7);
    sprite->target->x = 0;
    sprite->target->y = 0;
    sprite->target->w = sprite->srf->w;
    sprite->target->h = sprite->srf->h;
    sprite->scale = 1.0f;

    return sprite;
}

// public
void saten_sprite_texturize(saten_sprite *sprite)
{
    sprite->texture = SDL_CreateTextureFromSurface(saten_ren, sprite->srf);
    if (sprite->texture == NULL)
        saten_errhandler(14);
}

// public
void saten_sprite_draw(saten_sprite *sprite, int tile_id, int x, int y,
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

void saten_sprite_repeat(saten_sprite *sprite, int tile_id, int x0, int y0,
        int w, int h)
{
    for (int y = 0; y < h; y = y + sprite->target->h) {
        for (int x = 0; x < w; x = x + sprite->target->w) {
            saten_sprite_draw(sprite, tile_id, x + x0, y + y0, -1, false);
        }
    }
}


// public
void saten_sprite_tile_sheet(saten_sprite *sprite, int num_h, int num_v)
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
    sprite->scale = scale;
    if (sprite->tile) { // spritesheet
        sprite->target->w = sprite->tile->w * scale;
        sprite->target->h = sprite->tile->h * scale;
    } else { // entire sprite
        sprite->target->w = sprite->srf->w * scale;
        sprite->target->h = sprite->srf->h * scale;
    }
}

// public
void saten_sprite_destroy(saten_sprite *sprite)
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
void saten_sprite_alphamod(saten_sprite *sprite, uint8_t alpha)
{
    int r;
    if (sprite->srf) {
        r = SDL_SetSurfaceAlphaMod(sprite->srf, alpha);
        if (r < 0)
            saten_errhandler(20);
    }
    if (sprite->texture) {
        r = SDL_SetTextureAlphaMod(sprite->texture, alpha);
        if (r < 0)
            saten_errhandler(21);
    }
}
// public
void saten_sprite_colormod(saten_sprite *sprite, uint8_t r, uint8_t g,
        uint8_t b)
{
    int res;
    if (sprite->srf) {
        res = SDL_SetSurfaceColorMod(sprite->srf, r, g, b);
        if (res < 0)
            saten_errhandler(22);
    }
    if (sprite->texture) {
        res = SDL_SetTextureColorMod(sprite->texture, r, g, b);
        if (res < 0)
            saten_errhandler(23);
    }
}
// public
void saten_sprite_blendmode(saten_sprite *sprite, SDL_BlendMode blendmode)
{
    int r;
    if (sprite->srf) {
        r = SDL_SetSurfaceBlendMode(sprite->srf, blendmode);
        if (r < 0)
            saten_errhandler(24);
    }
    if (sprite->texture) {
        r = SDL_SetTextureBlendMode(sprite->texture, blendmode);
        if (r < 0)
            saten_errhandler(25);
    }
}

// public
void saten_sprite_colorize(saten_sprite *sprite, uint8_t r, uint8_t g,
        uint8_t b)
{
    for (int y = 0; y < sprite->srf->h; y++) {
        for (int x = 0; x < sprite->srf->w; x++) {
            uint8_t r0, g0, b0, a0;
            uint32_t pixel = saten_pixel_get(sprite, SATEN_SPRITE, x, y);
            SDL_GetRGBA(pixel, sprite->srf->format,&r0,&g0,&b0,&a0);
            pixel = SDL_MapRGBA(sprite->srf->format, r, g, b, a0);
            if (a0 != 0)
                saten_pixel_put(sprite, SATEN_SPRITE, x, y, pixel);
        }
    }
}

/*
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
*/
