#include "saturn_engine/_lib.h"

static int loops  = -1; // Default loop indefinitely
static int fadems = 0;  // Default no fade in
static double pos = 0;  // Default start at song beginning
                        // pos is only available to certain file types
                        // (MOD,OFF,MP3)

void saten_bgmplay(Mix_Music *music) /* PUBLIC */
{
    int ret;
    if (fadems > 0) {
        ret = Mix_PlayMusic(music, loops);
    }
    else {
        if (pos > 0)
            ret = Mix_FadeInMusicPos(music, loops, fadems, pos);
        else
            ret = Mix_FadeInMusic(music, loops, fadems);
    }
    if (ret < 0)
        saten_errhandler(67);
}
