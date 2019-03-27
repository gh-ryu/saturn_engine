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
void saten_combine_layers(void)
{
    if (saten_list_layer->num <= 1) // requires 2 layers min
        return;

    saten_fptr_list_action fptr = saten_layer_blit;
    saten_list_traverse(saten_list_layer, fptr);

}

// public
void saten_layer_clear_all(void)
{
    if (saten_list_layer->num <= 1)
        return;

    saten_fptr_list_action fptr = saten_layer_clear2;
    saten_list_traverse(saten_list_layer, fptr);
}

// public
void saten_layer_clear(saten_layer *layer)
{
    SDL_FillRect(layer->srf, NULL, SDL_MapRGBA(layer->srf->format,
                0, 0, 0, 0));
}

// public
void saten_layer_alphamod(saten_layer *layer, uint8_t alpha)
{
    int r;
    if (layer->srf) {
        r = SDL_SetSurfaceAlphaMod(layer->srf, alpha);
        if (r < 0)
            saten_errhandler(20);
    }
}
// public
void saten_layer_colormod(saten_layer *layer, uint8_t r, uint8_t g,
        uint8_t b)
{
    int res;
    if (layer->srf) {
        res = SDL_SetSurfaceColorMod(layer->srf, r, g, b);
        if (res < 0)
            saten_errhandler(22);
    }
}
// public
void saten_layer_blendmode(saten_layer *layer, SDL_BlendMode blendmode)
{
    int r;
    if (layer->srf) {
        r = SDL_SetSurfaceBlendMode(layer->srf, blendmode);
        if (r < 0)
            saten_errhandler(24);
    }
}

// private
void saten_layer_clear2(void *item, int i, int num)
{
    saten_layer *layer = (saten_layer*) item;
    if (i > 0)
        saten_layer_clear(layer);
}

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
        saten_layer_clear(saten_layer0);
    }
}
