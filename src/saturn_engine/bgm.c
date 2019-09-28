#include "saturn_engine/_lib.h"

static int loops  = -1; // Default loop indefinitely
static int fadems = 0;  // Default no fade in
static double pos = 0;  // Default start at song beginning
                        // pos is only available to certain file types
                        // (MOD,OFF,MP3)

void saten_bgmplay(saten_music *music) /* PUBLIC */
{
    int ret;
    if (fadems == 0) {
        ret = Mix_PlayMusic(music->o, loops);
    }
    else {
        if (pos > 0) {
            if (saten_mucheckpos(music->t))
                ret = Mix_FadeInMusicPos(music->o, loops, fadems, pos);
            else
                saten_errhandler(69);
        } else {
            ret = Mix_FadeInMusic(music->o, loops, fadems);
        }
    }
    if (ret < 0)
        saten_errhandler(67);
}

void saten_bgmposw(double npos) /* PUBLIC */
{
    pos = npos;
    if (pos < 0)
        pos = 0;
}

void saten_bgmloopsw(int n) /* PUBLIC */
{
    // This function affects the currently playing music
    loops = n;
}

void saten_bgmfadein(int ms) /* PUBLIC */
{
    // This functino affects subsequent calls to bgmplay
    fadems = ms;
    if (fadems < 0)
        fadems = 0;
}

void saten_bgmfadeout(int ms) /* PUBLIC */
{
    // This function affects the currently playing music
    Mix_FadeOutMusic(ms);
}
