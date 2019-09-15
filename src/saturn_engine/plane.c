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
    pl->tmod.pixels = NULL;
    pl->tmod.pitch = 0;

    pl->a = 1.0f;
    pl->d = 1.0f;


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

void saten_plane_make(saten_plane *pl) /* PUBLIC */
{
    // Fill texture via buffer
    void *p      = NULL;
    int i        = 0;
    int j        = 0;
    int ystart   = pl->screen.y;
    int xstart   = pl->screen.x;
    int xend     = pl->screen.x + pl->screen.w;
    bool x2flag  = false;
    int xdiff    = 0;
    int xdiff2   = 0;
    int x2type   = 0;

    // Extra routine when screen is at least partially
    // past the map's right boundary
    if (xend >= pl->map.w) {
        x2flag = true;
        xdiff2 = xend - pl->map.w; // Lenth of wrapping screen section
        xdiff  = pl->screen.w - xdiff2; // Length of section on map
    }

    // Extra routine when screen is at least partially
    // past the map's left boundary
    if (xstart < 0) {
        x2flag = true;
        xdiff2 = abs(xstart);
        xdiff  = pl->screen.w - xdiff2;
        xstart = pl->map.w - xdiff2;
        x2type = 1;
    }
    // For accessing the pixels
    const int spitch2 = xdiff2 * 4;
    const int spitch  = xdiff * 4;
    const int xpos    = xstart * 4;

    saten_plane_open(pl);

    for (int y = ystart; i < pl->screen.h; i++, y++, j+=pl->tmod.pitch) {
        // Check is screen is at least partially under or
        // above the map's vertical boundaries
        // and modify y accordingly
        int ydiff = pl->map.h - y;
        if (ydiff > pl->map.h)
            y = pl->map.h - (ydiff - pl->map.h)-1;
        if (ydiff <= 0)
            y = abs(ydiff);

        if (!x2flag) {
            // screen is horizontally within map
            p = pl->srf->pixels + (y * pl->srf->pitch) + xpos;
            memcpy(pl->tmod.pixels+j, p, pl->tmod.pitch);
        } else {
            // Split row into two sections
            switch (x2type) {
            case 0:
                p = pl->srf->pixels + (y * pl->srf->pitch) + xpos;
                memcpy(pl->tmod.pixels+j, p, spitch);
                p = pl->srf->pixels + (y * pl->srf->pitch);
                memcpy(pl->tmod.pixels+j+spitch, p, spitch2);
                break;
            case 1:
                p = pl->srf->pixels + (y * pl->srf->pitch);
                memcpy(pl->tmod.pixels+j+spitch2, p, spitch);
                p = pl->srf->pixels + (y * pl->srf->pitch) + xpos;
                memcpy(pl->tmod.pixels+j, p, spitch2);
                break;
            }
        }
    }
    saten_plane_close(pl);
}

void saten_plane_open(saten_plane *pl) /* PUBILC */
{
    if (pl->tmod.pixels)
        saten_errhandler(65);
    else
        SDL_LockTexture(pl->txt, NULL, &(pl->tmod.pixels), &(pl->tmod.pitch));
}

void saten_plane_close(saten_plane *pl) /* PUBLIC */
{
    if(!pl->tmod.pixels) {
        saten_errhandler(66);
    } else {
        SDL_UnlockTexture(pl->txt);
        pl->tmod.pixels = NULL;
        pl->tmod.pitch = 0;
    }
}

void saten_plane_draw(saten_plane *pl) /* PUBLIC */
{
    SDL_RenderCopy(saten_ren, pl->txt, NULL, NULL);
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
        pl->screen.x = pl->map.w - abs(x);
}

void saten_plane_pcpy(saten_plane *pl, int i, int x, int y) /* PUBLIC */
{
    //printf("i: %d, x: %d, y: %d\n", i, x, y);
    int pbytes = 4;
    int depth = i * pbytes;
    int xpos = x * pbytes;
    void *p = NULL;
    p = pl->srf->pixels + (y * pl->srf->pitch) + xpos;
    memcpy(pl->tmod.pixels+depth, p, 4);
}

void saten_plane_linecpy(saten_plane *pl, int l, int ox, int oy) /* PUBLIC */
{
    // Scroll screen according to offsets
    int x0 = pl->screen.x;
    int y0 = pl->screen.y;
    saten_plane_scroll(pl, ox, oy+l);

    void *p      = NULL;
    int y        = pl->screen.y;
    int xstart   = pl->screen.x;
    int xend     = xstart + pl->screen.w;
    bool x2flag  = false;
    int xdiff    = 0;
    int xdiff2   = 0;
    int x2type   = 0;

    // Extra routine when screen is at least partially
    // past the map's right boundary
    if (xend >= pl->map.w) {
        x2flag = true;
        xdiff2 = xend - pl->map.w; // Lenth of wrapping screen section
        xdiff  = pl->screen.w - xdiff2; // Length of section on map
    }

    // Extra routine when screen is at least partially
    // past the map's left boundary
    if (xstart < 0) {
        x2flag = true;
        xdiff2 = abs(xstart);
        xdiff  = pl->screen.w - xdiff2;
        xstart = pl->map.w - xdiff2;
        x2type = 1;
    }
    // For accessing the pixels
    const int spitch2 = xdiff2 * 4;
    const int spitch  = xdiff * 4;
    const int xpos    = xstart * 4;

    const int j = l * pl->tmod.pitch;


    // Check is screen is at least partially under or
    // above the map's vertical boundaries
    // and modify y accordingly
    int ydiff = pl->map.h - y;
    if (ydiff > pl->map.h)
        y = pl->map.h - (ydiff - pl->map.h)-1;
    if (ydiff <= 0)
        y = abs(ydiff);

    if (!x2flag) {
        // screen is horizontally within map
        p = pl->srf->pixels + (y * pl->srf->pitch) + xpos;
        memcpy(pl->tmod.pixels+j, p, pl->tmod.pitch);
    } else {
        // Split row into two sections
        switch (x2type) {
        case 0:
            p = pl->srf->pixels + (y * pl->srf->pitch) + xpos;
            memcpy(pl->tmod.pixels+j, p, spitch);
            p = pl->srf->pixels + (y * pl->srf->pitch);
            memcpy(pl->tmod.pixels+j+spitch, p, spitch2);
            break;
        case 1:
            p = pl->srf->pixels + (y * pl->srf->pitch);
            memcpy(pl->tmod.pixels+j+spitch2, p, spitch);
            p = pl->srf->pixels + (y * pl->srf->pitch) + xpos;
            memcpy(pl->tmod.pixels+j, p, spitch2);
            break;
        }
    }
    // Restore screen position
    pl->screen.x = x0;
    pl->screen.y = y0;
}

void saten_plmake(saten_plane *pl)
{
    for (int i = 0; i < pl->screen.h; i++)
        saten_plane_linecpy(pl, i, 0, 0);

}

SDL_Point saten_pltransform(saten_plane *pl, int x0, int y0)
{
    float xout, yout;
    float h, v, xi, yi;
    SDL_Point out;
    // Prepare Input
    xi = (float)x0 / (float)pl->screen.w;
    yi = (float)y0 / (float)pl->screen.h;
    h = (float)pl->screen.x / (float)pl->map.w;
    v = (float)pl->screen.y / (float)pl->map.h;

    // Get coordinates of transformed pixel
    xout = pl->a * (xi + h - pl->x0) + pl->b * (yi + v - pl->y0) + pl->x0;
    yout = pl->c * (xi + h - pl->x0) + pl->d * (yi + v - pl->y0) + pl->y0;

    // Wrap
    xout = fmod(xout, 1.0f);
    yout = fmod(yout, 1.0f);

    // Restore coordinates
    xout = xout * pl->screen.w;
    yout = yout * pl->screen.h;

    out.x = (int)xout;
    out.y = (int)yout;

    return out;
}
