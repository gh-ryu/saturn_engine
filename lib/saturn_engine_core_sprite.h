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
void saten_sprite_source_area(saten_sprite *sprite, int tile_id, int x, int y,
        int w, int h)
{
    if (sprite->source == NULL) {
        sprite->source = (SDL_Rect*) malloc(sizeof(SDL_Rect));
        if (sprite->source == NULL)
            saten_errhandler(7);
    }
    if (sprite->tile == NULL) {
        sprite->source->x = x;
        sprite->source->y = y;
    } else {
        sprite->source->x = sprite->tile[tile_id].x + x;
        sprite->source->y = sprite->tile[tile_id].y + y;
    }
    sprite->source->w = w;
    sprite->source->h = h;
    sprite->target->w = w;
    sprite->target->h = h;
}

// public
void saten_sprite_reset_source_area(saten_sprite *sprite)
{
    free(sprite->source);
    sprite->source = NULL;
    if (sprite->tile) {
        sprite->target->w = sprite->tile[0].w;
        sprite->target->h = sprite->tile[0].h;
    } else {
        sprite->target->w = sprite->srf->w;
        sprite->target->h = sprite->srf->h;
    }
}

// public
void saten_sprite_draw(saten_sprite *sprite, int tile_id, int x, int y,
        double ang, bool stretch)
{
    int r;
    SDL_Point rotation_center;
    SDL_Point *rcenptr;
    SDL_Rect *targetptr = NULL;
    SDL_Rect *sourceptr = NULL;
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
    if (sprite->tile) {
        if (sprite->source)
            sourceptr = sprite->source;
        else
            sourceptr = &sprite->tile[tile_id];
    } else {
        sourceptr = sprite->source;
    }
    printf("%d, %d, %d, %d\n", sourceptr->x, sourceptr->y,
            sourceptr->w, sourceptr->h);
    if (saten_target_layer == NULL) { // copy to renderer
        if (ang < 0) {  // no rotation
            r = SDL_RenderCopy(saten_ren, sprite->texture,
                    sourceptr, targetptr);
        } else {
            // rotate sprite
            r = SDL_RenderCopyEx(saten_ren, sprite->texture,
                    sourceptr, targetptr, ang, rcenptr, SDL_FLIP_NONE);
        }
    } else { // blit onto layer
        //TODO add rotation ?
        r = SDL_BlitScaled(sprite->srf, sourceptr, saten_target_layer->srf,
                    targetptr);
    }
    if (r < 0)
        saten_errhandler(16);
}

// public
// repeatedly draws a sprie across area w*h starting at point x0,y0
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
// setup for tile sheets
void saten_sprite_set_tiles(saten_sprite *sprite, int num_h, int num_v)
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
// sets scale for a sprite
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
// sets all pixels of a sprite to the specified colors.
// alpha values are retained
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

// public
// makes every other pixel transparent to create a retro transparency effect
void saten_sprite_patternize0(saten_sprite *sprite)
{
    for (int y = 0; y < sprite->srf->h; y++) {
        for (int x = 0; x < sprite->srf->w; x++) {
            if (y % 2 == 0) {
                if (x % 2 == 0) {
                    uint8_t r0, g0, b0, a0;
                    uint32_t pixel = saten_pixel_get(sprite, SATEN_SPRITE,
                            x, y);
                    SDL_GetRGBA(pixel, sprite->srf->format,&r0,&g0,&b0,&a0);
                    pixel = SDL_MapRGBA(sprite->srf->format, r0, g0, b0, 0);
                    saten_pixel_put(sprite, SATEN_SPRITE, x, y, pixel);
                }
            } else {
                if (x % 2 != 0) {
                    uint8_t r0, g0, b0, a0;
                    uint32_t pixel = saten_pixel_get(sprite, SATEN_SPRITE,
                            x, y);
                    SDL_GetRGBA(pixel, sprite->srf->format,&r0,&g0,&b0,&a0);
                    pixel = SDL_MapRGBA(sprite->srf->format, r0, g0, b0, 0);
                    saten_pixel_put(sprite, SATEN_SPRITE, x, y, pixel);
                }
            }
        }
    }
}

// public
// This function does NOT copy tile data and texture data. These have to be
// set for the copy individually
saten_sprite* saten_sprite_copy(saten_sprite *sprite_in)
{
    saten_sprite* sprite = (saten_sprite*) malloc(sizeof(saten_sprite));
    if (sprite == NULL)
        saten_errhandler(7); 
    memset(sprite, 0, sizeof(saten_sprite));

    SDL_Surface *surface = saten_surface_create(sprite_in->srf->w,
            sprite_in->srf->h, 32);
    sprite->srf = surface;

    int r = SDL_BlitSurface(sprite_in->srf, NULL, sprite->srf, NULL);
    if (r < 0)
        saten_errhandler(31);


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
