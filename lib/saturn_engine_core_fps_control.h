/* https://dixq.net/g/03_14.html */
// private
void saten_fps_control_update(void)
{
    if (saten_fps.cnt == 0) {
        saten_fps.t = SDL_GetTicks();
    }
    if (saten_fps.cnt == saten_fps.n) {
        Uint32 t = SDL_GetTicks();
        saten_fps.avg = 1000.0f /
            ((t - saten_fps.t) / (float) saten_fps.fps);
        saten_fps.cnt = 0;
        saten_fps.t = t;
    }
    saten_fps.cnt++;
}

/* https://dixq.net/g/03_14.html */
// private
void saten_fps_control_wait(void)
{
    Uint32 t2 = SDL_GetTicks() - saten_fps.t; // dt in ms
    int w = saten_fps.cnt * 1000 / saten_fps.fps - t2;
    if (w > 0)
        SDL_Delay(w);
}

// private
void saten_fps_control_update2(void)
{
    saten_fps_start = SDL_GetPerformanceCounter();
}

// private
void saten_fps_control_wait2(void)
{
    Uint64 delta = SDL_GetPerformanceCounter() - saten_fps_start;
    float deltaf = (float)delta;
    float pfreqf = (float)SDL_GetPerformanceFrequency();
    deltaf = deltaf / pfreqf;
    printf("pdeltaf: %f\n", deltaf);
    // wait until deltaf == 0.0166 for 60FPS
    // goal = (float) 1000 / desired_fps (30|60|etc)
    // check output of goal and recalculate deltaf accordingly to match
}
