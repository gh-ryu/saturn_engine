// public
char* saten_get_filepath(const char* fn)
{
    char *res =
        (char*) malloc(strlen(saten_base_path)+1+strlen(fn));
    if (res == NULL) {
        return NULL;
    }
    strcpy(res, saten_base_path);
    strcat(res, fn);
    return res;
}

// private
int saten_square(int a)
{
    return a * a;
}


/* https://sdl.beuc.net/sdl.wiki/Pixel_Access */
//public
uint32_t saten_get_pixel(void *data, int type, int x, int y)
{
    SDL_Surface *srf = saten_get_surface(data, type);
    int bpp = srf->format->BytesPerPixel;
    // get address of pixel we're sampling
    uint8_t *p = (uint8_t*) srf->pixels + y * srf->pitch + x * bpp;

    switch (bpp) {
    case 1:
        return *p;
        break;
    case 2:
        return *(uint16_t*)p;
        break;
    case 3:
        if (SDL_BYTEORDER == SDL_BIG_ENDIAN)
            return p[0] << 16 | p[1] << 8 | p[2];
        else
            return p[0] | p[1] << 8 | p[2] << 16;
        break;
    case 4:
        return *(uint32_t*)p;
        break;
    default:
        return 0;
    }
}

//public
void saten_put_pixel(void *data, int type, int x, int y, uint32_t pixel)
{
    SDL_Surface *srf = saten_get_surface(data, type);
    int bpp = srf->format->BytesPerPixel;
    uint8_t *p = (uint8_t*) srf->pixels + y * srf->pitch + x * bpp;

    switch (bpp) {
    case 1:
        *p = pixel;
        break;
    case 2:
        *(uint16_t*)p = pixel;
        break;
    case 3:
        if (SDL_BYTEORDER == SDL_BIG_ENDIAN)  {
            p[0] = (pixel >> 16) & 0xff;
            p[1] = (pixel >> 8) & 0xff;
            p[2] = pixel & 0xff;
        } else {
            p[0] = pixel & 0xff;
            p[1] = (pixel >> 8) & 0xff;
            p[2] = (pixel >> 16) & 0xff;
        }
        break;
    case 4:
        *(uint32_t*)p = pixel;
        break;
    }
}

//private
SDL_Surface* saten_get_surface(void *data, int type)
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
