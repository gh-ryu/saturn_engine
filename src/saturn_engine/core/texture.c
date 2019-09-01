#include "saturn_engine/core/_lib.h"

static uint32_t pformat;

SDL_Texture* saten_texture_create(int w, int h) /* PUBLIC */
{
    SDL_Texture* txt = SDL_CreateTexture(saten_ren, pformat,
                            SDL_TEXTUREACCESS_STREAMING, w, h);
    if (txt == NULL) {
        saten_killf = true;
        saten_errhandler(59);
    }
    return txt;
}

SDL_Texture* saten_texture_fromwinformat(int w, int h)
{
    uint32_t pformat = saten_window_pformr();
    SDL_Texture *texture = SDL_CreateTexture(saten_ren, pformat,
            SDL_TEXTUREACCESS_STREAMING, w, h);
    if (texture == NULL) {
        saten_killf = true;
        saten_errhandler(59);
    }
    return texture;
}

void saten_texture_pformatw(uint32_t form) /* PUBLIC */
{
    pformat = form;
}
