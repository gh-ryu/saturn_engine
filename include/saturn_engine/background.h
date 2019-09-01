#ifndef SATURN_ENGINE_BACKGROUND
#define SATURN_ENGINE_BACKGROUND

saten_background* saten_bg_create(saten_sprite *tileset, saten_tile *tmap,
        int w, int h, int x_offset, int y_offset, int wscreen0, int hscreen0);
void saten_bg_destroy(saten_background* bg);

#endif /* SATURN_ENGINE_BACKGROUND */
