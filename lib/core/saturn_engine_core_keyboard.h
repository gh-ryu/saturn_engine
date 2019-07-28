void saten_keyb_input_refresh(void)
{
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_0], 0);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_1], 1);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_2], 2);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_3], 3);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_4], 4);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_5], 5);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_6], 6);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_7], 7);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_8], 8);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_9], 9);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_BACKSPACE], 36);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_CAPSLOCK], 37);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_ESCAPE], 38);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F1], 39);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F2], 40);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F3], 41);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F4], 42);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F5], 43);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F6], 44);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F7], 45);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F8], 46);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F9], 47);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F10], 48);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F11], 49);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F12], 50);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_LCTRL]||
            saten_keystate[SDL_SCANCODE_RCTRL], 51);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_LALT]||
            saten_keystate[SDL_SCANCODE_RALT], 52);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_LSHIFT]||
            saten_keystate[SDL_SCANCODE_RSHIFT], 53);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_SPACE], 54);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_UP], 55);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_LEFT], 56);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_RIGHT], 57);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_DOWN], 58);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_RETURN], 59);
    if (saten_flag_check(SATEN_KEYCODES, saten_core_flags)) {
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_a)],
                10);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_b)],
                11);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_c)],
                12);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_d)],
                13);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_e)],
                14);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_f)],
                15);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_g)],
                16);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_h)],
                17);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_i)],
                18);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_j)],
                19);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_k)],
                20);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_l)],
                21);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_m)],
                22);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_n)],
                23);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_o)],
                24);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_p)],
                25);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_q)],
                26);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_r)],
                27);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_s)],
                28);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_t)],
                29);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_u)],
                30);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_v)],
                31);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_w)],
                32);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_x)],
                33);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_y)],
                34);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_z)],
                35);
    } else {
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_A], 10);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_B], 11);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_C], 12);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_D], 13);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_E], 14);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F], 15);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_G], 16);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_H], 17);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_I], 18);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_J], 19);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_K], 20);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_L], 21);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_M], 22);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_N], 23);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_O], 24);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_P], 25);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_Q], 26);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_R], 27);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_S], 28);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_T], 29);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_U], 30);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_V], 31);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_W], 32);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_X], 33);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_Y], 34);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_Z], 35);
    }
}

uint32_t saten_key(uint8_t i)
{
    return saten_keystate2[i];
}

void saten_keyb_input_update(bool b, uint8_t i)
{
    if (b) {
        uint32_t tmp = saten_keystate2[i];
        saten_keystate2[i] = (saten_keystate2[i] < 4294967295) ? tmp+1 : 1; 
    } else {
        saten_keystate2[i] = 0;
    }
}
