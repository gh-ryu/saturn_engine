#include "saturn_engine/core/_lib.h"

/* https://dixq.net/g/03_14.html */
// private
void saten_framerate_dixq_update(void)
{
    if (saten_framectrl.cnt == 0) {
        saten_framectrl.t = SDL_GetTicks();
    }
    if (saten_framectrl.cnt == saten_framectrl.n) {
        Uint32 t = SDL_GetTicks();
        saten_framectrl.avg = 1000.0f /
            ((t - saten_framectrl.t) / (float) saten_framectrl.fps);
        saten_framectrl.cnt = 0;
        saten_framectrl.t = t;
    }
    saten_framectrl.cnt++;
}

/* https://dixq.net/g/03_14.html */
// private
void saten_framerate_dixq_wait(void)
{
    Uint32 t2 = SDL_GetTicks() - saten_framectrl.t; // dt in ms
    int w = saten_framectrl.cnt * 1000 / saten_framectrl.fps - t2;
    if (w > 0)
        SDL_Delay(w);
}

// private
void saten_framerate_update(void)
{
    saten_framectrl.t2 = SDL_GetPerformanceCounter();
    if (saten_framectrl.cnt == 0)
        saten_framectrl.t3 = SDL_GetPerformanceCounter();
    if  (saten_framectrl.cnt == saten_framectrl.fps) {
        Uint64 delta = saten_framectrl.t2 - saten_framectrl.t3;
        float deltaf = (float)delta;
        deltaf = (deltaf / saten_framectrl.pfreq) * 1000.0f;

        saten_framectrl.avg = 1000.0f / (deltaf / (float)saten_framectrl.fps);
        saten_framectrl.cnt = 0;
        saten_framectrl.t3 = saten_framectrl.t2;
    }
    saten_framectrl.cnt++;
}

// private
void saten_framerate_wait(void)
{
    Uint64 delta = SDL_GetPerformanceCounter() - saten_framectrl.t2;
    float deltaf = (float)delta;
    deltaf = (deltaf / saten_framectrl.pfreq) * 1000.0f;
    float goalf = 1000.0f / (float)saten_framectrl.fps;
    //printf("goal: %f\n", goalf);
#ifdef _WIN32
    //printf("pf: %I64u, pfreqf: %f\n", SDL_GetPerformanceFrequency(), pfreqf);
#else
    //printf("pf: %lu, pfreqf: %f\n", SDL_GetPerformanceFrequency(), pfreqf);
#endif
    // wait until deltaf == 0.0166 for 60FPS
    // goal = (float) 1000 / desired_fps (30|60|etc)
    // check output of goal and recalculate deltaf accordingly to match
    if (deltaf > goalf) {
        // last frame took too long skip parts of next frame TODO
    }
    while (deltaf < goalf) {
        delta = SDL_GetPerformanceCounter() - saten_framectrl.t2;
        deltaf = (float)delta;
        deltaf = (deltaf / saten_framectrl.pfreq) * 1000.0f;
    }
    //printf("avg fps: %f\n", saten_framectrl.avg);
}

// public
void saten_framerate_set(int fps)
{
    saten_framectrl.fps = fps;
}

// public
float saten_framerate_average(void)
{
    return saten_framectrl.avg;
}

