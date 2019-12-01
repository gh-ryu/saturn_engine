#include "saturn_engine/core/_lib.h"

saten_music* saten_music_load(const char *fn) /* PRIVATE */
{
    saten_music *mus = (saten_music*)saten_malloc(sizeof(saten_music));
    mus->o = Mix_LoadMUS(fn);
    if (mus == NULL) {
        saten_errhandler(68);
        return mus;
    }
    mus->t = Mix_GetMusicType(mus->o);
    return mus;
}

bool saten_music_playback_check(saten_music *mus) /* PUBLIC */
{
    return mus->flag;
}

void saten_music_free(saten_music *mus) /* PRIVATE */
{
    Mix_FreeMusic(mus->o); 
    free(mus);
}

int saten_music_checkpos(Mix_MusicType t) /* PRIVATE */
{
   return (t == MUS_MOD || t == MUS_OGG || t == MUS_MP3);
}
