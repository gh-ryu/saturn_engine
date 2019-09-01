#include "saturn_engine/_lib.h"

saten_background* saten_bg_create(saten_sprite *tileset,saten_tile *tmap,
        int w, int h, int x_offset, int y_offset, int wscreen0, int hscreen0)
{
    if (w%8 != 0 || h%8 != 0) {
        saten_errhandler(60);
        return NULL;
    }
    const int tilen = (w/8)*(h/8);
    const int wscreen = wscreen0 + (x_offset*2);
    const int hscreen = hscreen0 + (y_offset*2);
    SDL_Rect tilemap = { 0, 0, w, h };
    SDL_Rect screen = { x_offset, y_offset, wscreen0, hscreen0 };

    

    
    saten_background *bg = (saten_background*)saten_malloc(
            sizeof(saten_background));
    bg->tilemap = tilemap;
    bg->screen = screen;
    bg->x_offset = x_offset;
    bg->y_offset = y_offset;
    bg->tileset = tileset;
    //bg->picture = pic;
    //bg->tiles = (saten_tile*)saten_malloc(sizeof(saten_tile)*tiles_n);
    bg->tiles = tmap;
    bg->tilen = tilen;
    bg->surface1 = saten_surface_fromwinformat(w, h, 32);
    bg->surface2 = saten_surface_fromwinformat(w, h, 32);
    uint32_t pformat = saten_window_pformr();
    bg->texture1 = SDL_CreateTexture(saten_ren, pformat,
            SDL_TEXTUREACCESS_STREAMING, wscreen, hscreen);
    bg->texture2 = SDL_CreateTexture(saten_ren, pformat,
            SDL_TEXTUREACCESS_STREAMING, wscreen, hscreen);

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
