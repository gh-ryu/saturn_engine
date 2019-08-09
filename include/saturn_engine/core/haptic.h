#ifndef SATURN_ENGINE_CORE_HAPTIC
#define SATURN_ENGINE_CORE_HAPTIC

void saten_haptic_init(int i);
void saten_rumble_init(int i);
void saten_rumble(int i, float str, uint32_t l);
void saten_rumble_stop(int i);
SDL_Haptic* saten_haptic_get(int i);

#endif /* SATURN_ENGINE_CORE_HAPTIC */
