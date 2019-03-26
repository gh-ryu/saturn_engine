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

int saten_square(int a)
{
    return a * a;
}


/* https://sdl.beuc.net/sdl.wiki/Pixel_Access */
uint32_t saten_get_pixel(SDL_Surface *srf, int x, int y)
{
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
