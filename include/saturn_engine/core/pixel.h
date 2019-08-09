#ifndef SATURN_ENGINE_CORE_PIXEL
#define SATURN_ENGINE_CORE_PIXEL

uint32_t saten_pixel_get(void *data, int tupe, int x, int y);
void saten_pixel_put(void *data,
        int type, int x, int y, uint32_t pixel);

#endif /* SATURN_ENGINE_CORE_PIXEL */
