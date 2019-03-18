int saten_run(saten_fptr_run fptr)
{
    while (!saten_break) {
        saten_fps_control_update();
        if (saten_flag_check(SATEN_INPUT, saten_flags)) {
            SDL_Event sdl_event;
            while (SDL_PollEvent(&sdl_event) != 0) {
                if (sdl_event.type == SDL_QUIT) 
                    saten_break = true;
                if (sdl_event.type == SDL_CONTROLLERDEVICEREMOVED) {
                    printf("removed contrller %d\n",
                            sdl_event.cdevice.which);
                }
                if (sdl_event.type == SDL_CONTROLLERDEVICEADDED) {
                    printf("added contrller %d\n",
                            sdl_event.cdevice.which);
                }
                if (sdl_event.type == SDL_JOYDEVICEADDED) {
                    printf("added joystick %d\n",
                            sdl_event.jdevice.which);
                }
            }
            SDL_PumpEvents();
            saten_keystate = SDL_GetKeyboardState(NULL);
            saten_keyb_input_refresh();
            if (saten_pad_num > 0) {
                for (int i = 0; i < saten_pad_num; i++) {
                    saten_pad_input_refresh(i);
                }
            }
        }
        if (SDL_RenderClear(saten_ren) < 0)
            saten_errhandler(6);

        // Game
        fptr();
        SDL_RenderPresent(saten_ren);
        saten_fps_control_wait();
    }
    return 0;
}

int saten_init(const char *title, int screen_width, int screen_height,
        uint8_t flags)
{
    saten_flag_set(flags, &saten_flags);
    if (!(saten_base_path = SDL_GetBasePath())) {
        fprintf(stderr, "Failed to acquire base path. (%s)\n", SDL_GetError());
        return -1;
    }
    if (SATEN_PRINTERR)
        saten_errpath = saten_get_filepath(SATEN_ERROR_LOG);

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_JOYSTICK |
                SDL_INIT_GAMECONTROLLER | SDL_INIT_HAPTIC)<0) {
        saten_errhandler(0);
        return -1;
    }

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        saten_errhandler(1);
        return -1;
    }

    if (TTF_Init() < 0) {
        saten_errhandler(2);
        return -1;
    }

    if ((saten_window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED,
                    SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height,
                    SDL_WINDOW_SHOWN)) == NULL) {
        saten_errhandler(3);
        return -1;
    }

    saten_ren = SDL_CreateRenderer(saten_window, -1, SDL_RENDERER_ACCELERATED);
    if (saten_ren == NULL) {
        saten_errhandler(4);
        return -1;
    }


    saten_pad_num = SDL_NumJoysticks();
    if (saten_pad_num >= 1) {
        //saten_pads = (saten_pad*) realloc(saten_pads, saten_pad_num*
        //        sizeof(saten_pad));
        saten_pads = (saten_pad*) malloc(sizeof(saten_pad)*saten_pad_num);
        memset(saten_pads, 0, sizeof(saten_pad)*saten_pad_num);
        if (saten_pads == NULL) {
            saten_errhandler(7);
        }
        for (int i = 0; i < saten_pad_num; ++i) {
            if (SDL_IsGameController(i)) {
                saten_pads[i].dev = SDL_GameControllerOpen(i);
                if (saten_pads[i].dev == NULL) {
                    saten_errhandler(5);
                } else {
                    saten_haptic_init(i);
                }
            } else {
                // joystick
                saten_pads[i].jdev = SDL_JoystickOpen(i);
                if (saten_pads[i].jdev == NULL) {
                    saten_errhandler(5);
                } else {
                    // joystick accepted
                }
            }
        }
    }

    if (saten_flag_check(SATEN_INPUT, saten_flags)) {
        saten_keystate2 = (int32_t*) malloc(59*sizeof(int32_t));
        memset(saten_keystate2, 0, 59*sizeof(int32_t));
        //saten_keystate2 = (uint32_t*) realloc(saten_keystate2,
        //        59*sizeof(uint32_t));
        if (saten_keystate2 == NULL) {
            saten_errhandler(7);
        }
    }

    saten_fps.fps = 60;

    // no problems
    return 0;
}
