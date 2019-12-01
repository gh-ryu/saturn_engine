#ifndef SATURN_ENGINE_CORE_SOUND
#define SATURN_ENGINE_CORE_SOUND

/* PRIVATE */
//saten_sound* saten_sound_load(const char *fn, int scene_id, int sfx_id);
saten_sound* saten_sound_load(const char *fn);
void saten_sound_free(saten_sound *sound);

#endif /* SATURN_ENGINE_CORE_SOUND */
