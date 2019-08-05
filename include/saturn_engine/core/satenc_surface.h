#ifndef SATURN_ENGINE_CORE_SURFACE
#define SATURN_ENGINE_CORE_SURFACE

SDL_Surface* saten_surface_create(int w, int h, int depth);
SDL_Surface* saten_surface_get(void *data, int type);

#endif /* SATURN_ENGINE_CORE_SURFACE */
