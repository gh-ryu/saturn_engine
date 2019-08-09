#ifndef SATURN_ENGINE_CORE_DRAW
#define SATURN_ENGINE_CORE_DRAW

void saten_draw_line(int x1, int y1, int x2, int y2, uint8_t r,
        uint8_t g, uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_rect(int x, int y, int w, int h, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_rect_filled(int x, int y, int w, int h, uint8_t r,
        uint8_t g, uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_point(int x, int y, uint8_t r, uint8_t g, uint8_t b,
        uint8_t a, SDL_BlendMode blendmode);
void saten_draw_circle(int x, int y, int rad, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_circle_filled(int x, int y, int rad, uint8_t r,
        uint8_t g, uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_set_param(uint8_t r, uint8_t g, uint8_t b, uint8_t a,
        SDL_BlendMode blendmode);
void saten_draw_bresenham_circle(int x, int y, int r, bool fill);
void saten_draw_simple_circle(int x, int y, int r, bool fill);

#endif /* SATURN_ENGINE_CORE_DRAW */
