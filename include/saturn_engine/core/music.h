#ifndef SATURN_ENGINE_CORE_MUSIC
#define SATURN_ENGINE_CORE_MUSIC

saten_music* saten_muload(const char *fn); /* PRIVATE */
void saten_mufree(saten_music *mus); /* PRIVATE */

int saten_mucheckpos(Mix_MusicType t); /* PRIVATE */

#endif /* SATURN_ENGINE_CORE_MUSIC */
