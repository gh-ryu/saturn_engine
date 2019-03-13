int saten_run(saten_fptr_run fptr)
{
    while (!saten_break) {
        //TODO update fps
        SDL_Event sdl_event;
        while (SDL_PollEvent(&sdl_event) != 0) {
            if (sdl_event.type == SDL_QUIT) 
                saten_break = true;
        }
        //TODO update inputs
        SDL_RenderClear(saten_ren);
        // Game
        fptr();
        SDL_RenderPresent(saten_ren);
        //TODO wait until next frame begins

    }
    return 0;
}
int saten_init(const char *title, int screen_width, int screen_height)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO |
                SDL_INIT_GAMECONTROLLER)<0) {
        //TODO error stuff
        return -1;
    }

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        //TODO error stuff
        return -1;
    }

    if (TTF_Init() < 0) {
        //TODO error stuff
        return -1;
    }

    if ((saten_window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED,
                    SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height,
                    SDL_WINDOW_SHOWN)) == NULL) {
        //TODO error
        return -1;
    }

    // not implementing renderer for full control
    // guess I'll test anyways
    saten_ren = SDL_CreateRenderer(saten_window, -1, SDL_RENDERER_ACCELERATED);
    if (saten_ren == NULL) {
        //TODO error
        return -1;
    }

    if (!(saten_base_path = SDL_GetBasePath())) {
        //TODO error
        return -1;
    }

    int pad_cnt = SDL_NumJoysticks();
    if (pad_cnt >= 1) {
        saten_pads = (saten_pad*) realloc(saten_pads, pad_cnt*
                sizeof(saten_pad));
        for (int i = 0; i < pad_cnt; ++i) {
            if (SDL_IsGameController(i)) {
                saten_pads[i-1].dev = SDL_GameControllerOpen(i);
                if (saten_pads[i-1].dev == NULL) {
                    //TODO error but no break, failed opening controller
                }
            }
        }
    }



    // no problems
    return 0;
    
}
