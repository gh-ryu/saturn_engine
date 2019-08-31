#include "saturn_engine/_lib.h"

saten_background* saten_bg_create(saten_sprite *tileset, saten_sprite *pic,
        int w, int h, int x_offset, int y_offset, int wscreen, int hscreen)
{
    if (w%8 != 0 || h%8 != 0) {
        saten_errhandler(60);
        return NULL;
    }
    const int tiles_n = (w/8)*(h/8);
    SDL_Rect tilemap = { 0, 0, w, h };
    SDL_Rect screen = { 0, 0, wscreen, hscreen };

    

    
    saten_background *bg = (saten_background*)saten_malloc(
            sizeof(saten_background));
    bg->tilemap = tilemap;
    bg->screen = screen;
    bg->x_offset = x_offset;
    bg->y_offset = y_offset;
    bg->tileset = tileset;
    bg->picture = pic;
    bg->tiles = (saten_tile*)saten_malloc(sizeof(saten_tile)*tiles_n);
    bg->surface1 = saten_surface_fromwinformat(w, h, 32);
    bg->surface2 = saten_surface_fromwinformat(w, h, 32);
    uint32_t pformat = saten_window_pformr();
    bg->texture1 = SDL_CreateTexture(saten_ren, pformat,
            SDL_TEXTUREACCESS_STREAMING, w, h);
    bg->texture2 = SDL_CreateTexture(saten_ren, pformat,
            SDL_TEXTUREACCESS_STREAMING, w, h);

    return bg;
}

void saten_bg_destroy(saten_background *bg)
{
    free(bg->tiles);
    SDL_FreeSurface(bg->surface1);
    SDL_FreeSurface(bg->surface2);
    SDL_DestroyTexture(bg->texture1);
    SDL_DestroyTexture(bg->texture2);
    free(bg);
}
