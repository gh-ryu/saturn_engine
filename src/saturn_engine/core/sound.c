#include "saturn_engine/core/_lib.h"

saten_sound* saten_sound_load(const char *fn)
//saten_sound* saten_sound_load(const char *fn, int scene_id, int sfx_id)
    /* PRIVATE */
{
    saten_sound *sound = (saten_sound*)saten_malloc(sizeof(saten_sound));
    sound->o = Mix_LoadWAV(fn);
    if (sound == NULL) {
        saten_errhandler(68);
        return sound;
    }
    return sound;
}

void saten_sound_free(saten_sound *sound) /* PRIVATE */
{
    Mix_FreeChunk(sound->o); 
    free(sound);
}
