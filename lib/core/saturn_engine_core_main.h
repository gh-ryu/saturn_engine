int saten_core_run(saten_fptr_run fptr)
{
    while (!saten_break) {
        //saten_framerate_dixq_update();
        saten_framerate_update();
        if (saten_flag_check(SATEN_INPUT, saten_core_flags)) {
            SDL_Event sdl_event;
            while (SDL_PollEvent(&sdl_event) != 0) {
                if (sdl_event.type == SDL_QUIT) 
                    saten_break = true;
                if (sdl_event.type == SDL_JOYDEVICEREMOVED) {
                    //FIXME jdevice.which returns nonsense on second removal
                    // and causes seg fault
                    printf("removed controller id: %d\n", sdl_event.jdevice.which);
                    saten_controller_remove(sdl_event.jdevice.which);
                }
                if (sdl_event.type == SDL_JOYDEVICEADDED) {
                    printf("added controller id: %d\n", sdl_event.jdevice.which);
                    saten_controller_add(sdl_event.jdevice.which);
                }
            }
            SDL_PumpEvents();
            saten_keystate = SDL_GetKeyboardState(NULL);
            saten_keyb_input_refresh();
            if (saten_pad_num > 0) {
                for (int i = 0; i < saten_pad_num; i++) {
                    if (saten_pads[i].flag)
                        saten_pad_input_refresh(i);
                }
            }
        }
        if (SDL_RenderClear(saten_ren) < 0)
            saten_errhandler(6);

        // Game
        fptr();
        SDL_RenderPresent(saten_ren);
        //saten_framerate_dixq_wait();
        saten_framerate_wait();
        saten_step++;
    }
    return 0;
}

int saten_core_init(const char *title, int screen_width, int screen_height,
        uint8_t flags)
{
    saten_step = 0;
    saten_flag_set(flags, &saten_core_flags);
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

    if (saten_audio_init() < 0)
        return -1;

    /*
    if (TTF_Init() < 0) {
        saten_errhandler(2);
        return -1;
    }
    */

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



    if (saten_flag_check(SATEN_INPUT, saten_core_flags)) {
        saten_keystate2 = (int32_t*)saten_malloc(60*sizeof(int32_t));
    }

    if (saten_flag_check(SATEN_INPUT, saten_core_flags)) {
        if (SDL_GameControllerAddMappingsFromFile("gamecontrollerdb.txt")<0)
            saten_errhandler(12);

    }

    saten_list_init(&saten_list_layer, sizeof(saten_layer));
    saten_layer0 = saten_layer_create(screen_width, screen_height);
    saten_layer0->flag = 0;
    saten_layer0->clip_area = (SDL_Rect*)saten_malloc(sizeof(SDL_Rect));
    saten_set_target_layer(NULL);

    // frame control
    saten_framectrl.fps = 60;
    saten_framectrl.pfreq = (float)SDL_GetPerformanceFrequency();

    //mrb
    if (saten_flag_check(SATEN_MRB, saten_core_flags)) {
        saten_mrb = mrb_open();
        if (!saten_mrb) {
            saten_errhandler(34);
            return -1;
        }
        saten_mrbc = mrbc_context_new(saten_mrb);
        saten_mrb_init();

        if (saten_flag_check(SATEN_TEXT, saten_core_flags)) {
            saten_mrb_text_init();
            saten_list_init(&saten_list_text, sizeof(saten_text));
            FILE *f = NULL;
            saten_fopen(&f, "script/saten_script_glyph_mapping.rb", "r");
            mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
            fclose(f);
            saten_fopen(&f, "script/saten_script_class_text.rb", "r");
            mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
            fclose(f);
            saten_fopen(&f, "script/saten_script_text_init.rb", "r");
            mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
            fclose(f);
        }
    }




    // no problems
    return 0;
}

void saten_core_quit(void)
{
    if (saten_flag_check(SATEN_MRB, saten_core_flags)) {
        mrbc_context_free(saten_mrb, saten_mrbc);
        mrb_close(saten_mrb);
    }
}
