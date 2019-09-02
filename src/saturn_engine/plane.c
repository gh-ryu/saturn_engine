#include "saturn_engine/_lib.h"

saten_plane* saten_plane_create(saten_sprite *tileset,
        int w, int h, int x_offset, int y_offset, int wscreen0, int hscreen0)
    /* PUBLIC */
{
    if (w%8 != 0 || h%8 != 0) {
        saten_errhandler(60);
        return NULL;
    }
    const int tilen = (w/8)*(h/8);
    const int wscreen = wscreen0 + (x_offset*2);
    const int hscreen = hscreen0 + (y_offset*2);
    SDL_Rect map = { 0, 0, w, h };
    SDL_Rect screen = { x_offset, y_offset, wscreen0, hscreen0 };
    
    saten_plane *pl = (saten_plane*)saten_malloc(
            sizeof(saten_plane));
    pl->map = map;
    pl->screen = screen;
    pl->x_offset = x_offset;
    pl->y_offset = y_offset;
    pl->tileset = tileset;
    pl->tilen = tilen;
    pl->srf = saten_surface_create(w, h, 32);
    pl->txt = saten_texture_create(wscreen, hscreen);

    return pl;
}

void saten_plane_linktmap(saten_plane *pl, saten_tile *tmap) /* PUBLIC */
{
    int i = pl->tmapn;
    pl->tmapn++;
    pl->tmap = (saten_tile**)saten_realloc(pl->tmap,
            pl->tmapn * sizeof(saten_tile*));
    pl->tmap[i] = tmap;
}

void saten_plane_sprdraw(saten_plane *pl, saten_sprite *spr, int x, int y)
    /* PUBLIC */
{
}

void saten_plane_tmapdraw(saten_plane *pl, int id) /* PUBLIC */
{
}

void saten_plane_destroy(saten_plane *pl) /* PUBLIC */
{
    free(pl->tmap);
    SDL_FreeSurface(pl->srf);
    SDL_DestroyTexture(pl->txt);
    free(pl);
}
