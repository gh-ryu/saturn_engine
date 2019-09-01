#ifndef SATURN_ENGINE_CORE_TEXTURE
#define SATURN_ENGINE_CORE_TEXTURE

SDL_Texture* saten_texture_create(int w, int h);
SDL_Texture* saten_texture_fromwinformat(int w, int h);

void saten_texture_pformatw(uint32_t form);

#endif /* SATURN_ENGINE_CORE_TEXTURE */
