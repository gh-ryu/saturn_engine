#ifndef SATURN_ENGINE_CORE_LAYER
#define SATURN_ENGINE_CORE_LAYER

saten_layer* saten_layer_create(int width, int height);
void saten_layer_destroy(saten_layer *lay);
void saten_layer_set_clip_area(saten_layer *lay,
        int x, int y, int w, int h);
void saten_layer_reset_clip_area(saten_layer *lay);
void saten_layer_render_all(void);
void saten_layer_blit(void *item, int i, int num);
void saten_layer_clear(saten_layer *layer);
void saten_layer_clear2(void *item, int i, int num);
void saten_layer_clear_all(void);
void saten_layer_alphamod(saten_layer *layer, uint8_t alpha);
void saten_layer_colormod(saten_layer *layer, uint8_t r, uint8_t g,
        uint8_t b);
void saten_layer_blendmode(saten_layer *layer, SDL_BlendMode blendmode);

void saten_layer_set_target(saten_layer *lay);

#endif /* SATURN_ENGINE_CORE_LAYER */
