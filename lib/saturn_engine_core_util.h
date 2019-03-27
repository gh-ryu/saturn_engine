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
