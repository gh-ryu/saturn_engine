#include "saturn_engine/core/_lib.h"


uint32_t saten_window_pformr(void)
{
    uint32_t pformat = SDL_GetWindowPixelFormat(saten_window);
    if (pformat == SDL_PIXELFORMAT_UNKNOWN) {
        saten_killf = true;
        saten_errhandler(58);
    }
    return pformat;
}
