#include "saturn_engine/_lib.h"

static int loops  = -1; // Default loop indefinitely
static int fadems = 0;  // Default no fade in
static double pos = 0;  // Default start at song beginning
static double lpos = 0; // pos is only available to certain file types
                        // (MOD,OFF,MP3)
static bool playf;
static bool repeatf;
static bool pausef;
//static int curloop;
static saten_music *track;

void saten_bgmplay(saten_music *music) /* PUBLIC */
{
    track = music;
    saten_bgmstart();
    if (loops == -1) {
        Mix_HookMusicFinished(saten_bgmloop);
    }
}

void saten_bgmposw(double npos) /* PUBLIC */
{
    pos = npos;
    if (pos < 0)
        pos = 0;
}

void saten_bgmlposw(double npos) /* PUBLIC */
{
    lpos = npos;
    if (lpos < 0)
        lpos = 0;
}

void saten_bgmloopsw(int n) /* PUBLIC */
{
    // This function affects the currently playing music
    loops = n;
}

void saten_bgmrepeat(void) /* PUBLIC */
{
    loops = -1;
}

void saten_bgmnorepeat(void) /* PUBLIC */
{
    loops = 0;
}

void saten_bgmfadein(int ms) /* PUBLIC */
{
    // This function affects subsequent calls to bgmplay
    fadems = ms;
    if (fadems < 0)
        fadems = 0;
}

void saten_bgmfadeout(int ms) /* PUBLIC */
{
    // This function affects the currently playing music
    Mix_HookMusicFinished(NULL);
    Mix_FadeOutMusic(ms);
    lpos = 0;
    track = NULL;
}

void saten_bgmloop(void) /* PRIVATE */
{
    Mix_PlayMusic(track->o, 1);
    repeatf = true;
    saten_bgmstart();
}

void saten_bgmstart(void) /* PRIVATE */
{
    if (repeatf)
        pos = lpos; // Looped playback starts at loop pos
    int ret;
    if (fadems == 0 && pos == 0) {
        ret = Mix_PlayMusic(track->o, 1);
    } else {
        if (pos > 0) {
            if (saten_mucheckpos(track->t))
                ret = Mix_FadeInMusicPos(track->o, 1, fadems, pos);
            else
                saten_errhandler(69);
        } else {
            ret = Mix_FadeInMusic(track->o, 1, fadems);
        }
    }
    if (ret < 0)
        saten_errhandler(67);
    else
        playf = true;
    fadems = 0; // Don't fade in repeats
    pos    = 0; // Reset default starting position
    repeatf = false;
}

void saten_bgmvolw(int v) /* PUBLIC */
{
    Mix_VolumeMusic(v);
}

int saten_bgmvolr(void) /* PUBLIC */
{
    return Mix_VolumeMusic(-1);
}

void saten_bgmpause(void) /* PUBLIC */
{
    if (pausef)
        Mix_ResumeMusic();
    else
        Mix_PauseMusic();
    pausef = !pausef;
}

void saten_bgmstop(void) /* PUBLIC */
{
    Mix_HookMusicFinished(NULL);
    Mix_HaltMusic();
    lpos = 0;
    track = NULL;
    loops = -1;
    pos = 0;
    repeatf = false;
    pausef = false;
    playf = false;
}
