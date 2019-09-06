#include "saturn_engine/_lib.h"


saten_plane* saten_plane_create(saten_sprite *tileset,
        int w, int h, int x_offset, int y_offset, int wscreen0, int hscreen0)
    /* PUBLIC */
{
    if (w%8 != 0 || h%8 != 0) {
        saten_errhandler(60);
        return NULL;
    }
    if (w < SATEN_GAME_WIDTH || h < SATEN_GAME_HEIGHT) {
        saten_errhandler(64);
        return NULL;
    }
    const int tilen = (w/8)*(h/8);
    const int wscreen = wscreen0 + (x_offset*2);
    const int hscreen = hscreen0 + (y_offset*2);
    SDL_Rect map = { 0, 0, w, h };
    SDL_Rect scrupdate = { 0-x_offset, 0-y_offset, wscreen, hscreen };
    SDL_Rect screen = { 0, 0, wscreen0, hscreen0 };
    
    saten_plane *pl = (saten_plane*)saten_malloc(
            sizeof(saten_plane));
    pl->map = map;
    pl->screen = screen;
    pl->scrupdate = scrupdate;
    pl->x_offset = x_offset;
    pl->y_offset = y_offset;
    pl->tileset = tileset;
    pl->tilen = tilen;
    pl->srf = saten_surface_create(w, h, 32);
    pl->txt = saten_texture_create(wscreen0, hscreen0);
    SDL_SetTextureBlendMode(pl->txt, SDL_BLENDMODE_BLEND);
    pl->bpp = 32;

    pl->buffer = (uint32_t*)saten_malloc(4* (wscreen * hscreen));
    saten_plane_clear(pl);

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

void saten_plane_linkspr(saten_plane *pl, saten_sprite *spr) /* PUBLIC */
{
    int i = pl->picn;
    pl->picn++;
    pl->pic = (saten_sprite**)saten_realloc(pl->pic,
            pl->picn * sizeof(saten_sprite*));
    pl->pic[i] = spr;
}

void saten_plane_blitpic(saten_plane *pl, int id, int x, int y, float scale,
        double ang) /* PUBLIC */
{
    if (pl->pic == NULL || id > pl->picn)
        saten_errhandler(63);
    SDL_Rect target = { x, y, pl->pic[id]->srf->w, pl->pic[id]->srf->h };
    if (ang != 0) {
        // TODO rotation
    }
    if (scale == 1.0f) {
        SDL_BlitSurface(pl->pic[id]->srf, NULL, pl->srf, &target);
    } else {
        target.w *= scale;
        target.h *= scale;
        SDL_BlitScaled(pl->pic[id]->srf, NULL, pl->srf, &target);
    }
}

void saten_plane_blittmap(saten_plane *pl, int id) /* PUBLIC */
{
}

void saten_plane_destroy(saten_plane *pl) /* PUBLIC */
{
    free(pl->tmap);
    SDL_FreeSurface(pl->srf);
    SDL_DestroyTexture(pl->txt);
    free(pl->buffer);
    free(pl);
}

void saten_plane_make(saten_plane *pl, int test) /* PUBLIC */
{
    if (test == 0) {
    // Fill texture via buffer
    int pitch;
    void *pixels = NULL;
    SDL_LockTexture(pl->txt, NULL, &pixels, &pitch);
    // Srf pixels do not map 1:1 to screen pixels...
    int i = 0;
    int j = 0;
    int ystart = pl->screen.y;
    int yend   = pl->screen.y + pl->screen.h;
    int xstart = pl->screen.x;
    int xend   = pl->screen.x + pl->screen.w;
    /*
    for (int y = ystart; y < yend; y++) {
        for (int x = xstart; x < xend; x++) {
            uint8_t *p =
                (uint8_t*) pl->srf->pixels + y * pl->srf->pitch + x * 4;
            
            //memcpy(pl->buffer+i, p, 4);
            memcpy(pixels+i, p, 4);
            //pl->buffer[i] = *(uint32_t*)p;
            //pl->buffer[i] = saten_pixel_get(pl->srf, SATEN_SURFACE, x, y);
            i++;
        }
    }
    */
    //for (int y = ystart; y < yend; y++) {
    for (int y = ystart; i < pl->screen.h; i++, y++, j+=pitch) {
        int ydiff = pl->map.h - y;
        if (ydiff > pl->map.h)
            y = pl->map.h - (ydiff - pl->map.h)-1;
        if (ydiff <= 0) {
            y = abs(ydiff);
        }

        if (yend > pl->map.h) {
            // Screen goes beyond map V-boundary
            // Simply adjust ystart
        }

        if (xend > pl->map.w || xstart < 0) {
            // screen goes beyond map H-boundary
        }


        void *p = pl->srf->pixels + (y * pl->srf->pitch) + (xstart * 4);
        memcpy(pixels+j, p, pitch);
    }
    SDL_UnlockTexture(pl->txt);
    } else {
    }
}

void saten_plane_draw(saten_plane *pl, int test) /* PUBLIC */
{
    if (test == 0) {
        SDL_RenderCopy(saten_ren, pl->txt, NULL, NULL);
    } else {
        // extract color from pixels and draw to renderer
    int ystart = pl->screen.y;
    int yend   = pl->screen.y + pl->screen.h;
    int xstart = pl->screen.x;
    int xend   = pl->screen.x + pl->screen.w;
    for (int y = ystart; y < yend; y++) {
        for (int x = xstart; x < xend; x++) {
            uint8_t *p =
                (uint8_t*) pl->srf->pixels + y * pl->srf->pitch + x * 4;
            uint32_t pixel = *(uint32_t*)p;
            uint8_t *pc = (uint8_t*) &pixel;
            SDL_SetRenderDrawColor(saten_ren, pc[0], pc[1], pc[2], pc[3]);
            SDL_RenderDrawPoint(saten_ren, x, y);
        }
    }

    }
}

void saten_plane_clear(saten_plane *pl) /* PUBLIC */
{
    //SDL_FillRect(pl->srf, NULL, SDL_MapRGBA(pl->srf->format, 0, 0, 0, 255));
    SDL_FillRect(pl->srf, NULL, SDL_MapRGBA(pl->srf->format, 0, 0, 0, 0));
}

void saten_plane_scroll(saten_plane *pl, int x, int y) /* PUBLIC */
{
    pl->screen.x += x;
    pl->scrupdate.x += x;

    pl->screen.y += y;
    pl->scrupdate.y += y;

    // Reposition screen into map
    if (pl->screen.y >= pl->map.h)
        pl->screen.y = pl->screen.y - pl->map.h;
    if (pl->screen.y < pl->screen.h * -1)
        pl->screen.y = pl->map.h - pl->screen.h;
    if (pl->screen.x >= pl->map.w)
        pl->screen.x = pl->screen.x - pl->map.w;
    if (pl->screen.x < pl->screen.w * -1)
        pl->screen.x = pl->map.w - pl->screen.w;
}
