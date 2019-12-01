#ifndef SATURN_ENGINE_CORE_MUSIC
#define SATURN_ENGINE_CORE_MUSIC

saten_music* saten_music_load(const char *fn); /* PRIVATE */
void saten_music_free(saten_music *mus); /* PRIVATE */
bool saten_music_playback_check(saten_music *mus);

int saten_music_checkpos(Mix_MusicType t); /* PRIVATE */

#endif /* SATURN_ENGINE_CORE_MUSIC */
