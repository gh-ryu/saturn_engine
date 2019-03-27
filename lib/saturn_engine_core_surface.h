SDL_Surface* saten_surface_create(int w, int h, int depth)
{
    SDL_Surface *srf = (SDL_Surface*) malloc(sizeof(SDL_Surface));
    if (srf == NULL)
        saten_errhandler(7); 
    memset(srf, 0, sizeof(SDL_Surface));
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
    srf = SDL_CreateRGBSurface(0, w, h, depth, rmask, gmask, bmask, amask);
    if (srf == NULL)
        saten_errhandler(17);

    return srf;
}

//private
SDL_Surface* saten_surface_get(void *data, int type)
{
    SDL_Surface *srf = NULL;
    saten_sprite *spr = NULL;
    saten_layer *lay = NULL;
    switch (type) {
    case SATEN_SPRITE:
        spr = (saten_sprite*) data;
        srf = spr->srf;
        break;
    case SATEN_LAYER:
        lay = (saten_layer*) data;
        srf = lay->srf;
        break;
    case SATEN_SURFACE:
        srf = (SDL_Surface*) data;
        break;
    default:
        return NULL;
    }
    return srf;
}
