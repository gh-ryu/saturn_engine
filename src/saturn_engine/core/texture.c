#include "saturn_engine/core/_lib.h"

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
