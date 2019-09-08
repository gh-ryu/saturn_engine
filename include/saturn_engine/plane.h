#ifndef SATURN_ENGINE_BACKGROUND
#define SATURN_ENGINE_BACKGROUND

saten_plane* saten_plane_create(saten_sprite *tileset,
        int w, int h, int x_offset, int y_offset, int wscreen0, int hscreen0);
void saten_plane_linktmap(saten_plane *pl, saten_tile *tmap);
void saten_plane_linkspr(saten_plane *pl, saten_sprite *spr);
void saten_plane_destroy(saten_plane* bg);

void saten_plane_blitpic(saten_plane *pl, int id, int x, int y, float scale,
        double ang);
void saten_plane_blittmap(saten_plane *pl, int id);

void saten_plane_clear(saten_plane *pl);
void saten_plane_make(saten_plane *pl);
void saten_plane_draw(saten_plane *pl);
void saten_plane_scroll(saten_plane *pl, int x, int y);

void saten_plane_open(saten_plane *pl);
void saten_plane_close(saten_plane *pl);

#endif /* SATURN_ENGINE_BACKGROUND */
