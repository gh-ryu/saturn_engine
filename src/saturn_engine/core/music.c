#include "saturn_engine/core/_lib.h"

saten_music* saten_muload(const char *fn) /* PRIVATE */
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

void saten_mufree(saten_music *mus) /* PRIVATE */
{
    Mix_FreeMusic(mus->o); 
    free(mus);
}
