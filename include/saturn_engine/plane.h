#ifndef SATURN_ENGINE_BACKGROUND
#define SATURN_ENGINE_BACKGROUND

saten_plane* saten_plane_create(saten_sprite *tileset,
        int w, int h, int x_offset, int y_offset, int wscreen0, int hscreen0);
void saten_plane_linktmap(saten_plane *pl, saten_tile *tmap);
void saten_plane_destroy(saten_plane* bg);

void saten_plane_sprdraw(saten_plane *pl, saten_sprite *spr, int x, int y);
void saten_plane_tmapdraw(saten_plane *pl, int id);

#endif /* SATURN_ENGINE_BACKGROUND */
