#ifndef SATURN_ENGINE_CORE_SPRITE
#define SATURN_ENGINE_CORE_SPRITE

void saten_sprite_destroy(saten_sprite *sprite);
void saten_sprite_draw(saten_sprite *sprite, int tile_id, int x, int y,
        double ang, bool stretch);
void saten_sprite_scale(saten_sprite *sprite, float scale);
saten_sprite* saten_sprite_load(char *filename);
void saten_sprite_texturize(saten_sprite *sprite);
void saten_sprite_set_tiles(saten_sprite *sprite, int num_h, int num_v);
void saten_sprite_alphamod(saten_sprite *sprite, uint8_t alpha);
void saten_sprite_colormod(saten_sprite *sprite, uint8_t r, uint8_t g,
        uint8_t b);
void saten_sprite_blendmode(saten_sprite *sprite,
        SDL_BlendMode blendmode);
void saten_sprite_repeat(saten_sprite *sprite, int tile_id, int x0,
        int y0, int w, int h);
saten_sprite* saten_sprite_copy(saten_sprite *sprite_in);
void saten_sprite_colorize(saten_sprite *sprite, uint8_t r, uint8_t g,
        uint8_t b);
void saten_sprite_patternize0(saten_sprite *sprite);

#endif /* SATURN_ENGINE_CORE_SPRITE */
