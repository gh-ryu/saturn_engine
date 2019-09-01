#include "saturn_engine/core/_lib.h"

SDL_RendererInfo info;
uint32_t pformat;

int saten_ren_create(void) /* PUBLIC */
{
    saten_ren = SDL_CreateRenderer(saten_window, -1, SDL_RENDERER_ACCELERATED);
    if (saten_ren == NULL) {
        saten_errhandler(4);
        return -1;
    } else {
        if (SDL_GetRendererInfo(saten_ren, &info) < 0)
            saten_errhandler(62);
#ifdef _DEBUG
        saten_ren_print_pformats();
#endif /* _DEBUG */
    }
    saten_ren_pformatw();
    return 0;
}

void saten_ren_pformatw(void) /* PRIVATE */
{
    // First format is assumed to be preferred
    if (info.num_texture_formats > 0)
        pformat = info.texture_formats[0];
    else
        pformat = SDL_PIXELFORMAT_UNKNOWN;
}

uint32_t saten_ren_pformatr(void) /* PUBLIC */
{
    return pformat;
}


void saten_ren_print_pformats(void) /* PUBLIC */
{
    for (int i = 0; i < info.num_texture_formats; i++)
        printf("Renderer supports %s\n", SDL_GetPixelFormatName(
                    info.texture_formats[i]));
}
