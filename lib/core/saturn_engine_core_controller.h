void saten_pad_input_refresh(int i)
{
    if (saten_pads[i].dev)
        saten_pad_input_refresh_controller(i);
    if (saten_pads[i].jdev)
        saten_pad_input_refresh_joystick(i);
}

uint32_t saten_btn(uint8_t i, int j)
{
    if (saten_pad_num >= j+1) {
        if (saten_pads[j].flag)
            if (!saten_pads[j].lockstate[i])
                return saten_pads[j].state[i];
            else
                return 0;
        else
            return 0;
    }
    return 0;
}

void saten_btn_lock(int i)
{
    if (i < 0)
        for (int j = 0; j < saten_pad_num; j++)
            for (int k = 0; k < 25; k++)
                saten_pads[j].lockstate[k] = true;
    else
        for (int j = 0; j < saten_pad_num; j++)
            saten_pads[j].lockstate[i] = true;
}

void saten_btn_unlock(int i)
{
    if (i < 0)
        for (int j = 0; j < saten_pad_num; j++)
            for (int k = 0; k < 25; k++)
                saten_pads[j].lockstate[k] = false;
    else
        for (int j = 0; j < saten_pad_num; j++)
            saten_pads[j].lockstate[i] = false;
}

void saten_pad_input_update(int i, bool b, int j)
{
    if (b) {
        uint32_t tmp = saten_pads[i].state[j];
        saten_pads[i].state[j] =
            (saten_pads[i].state[j] < 4294967295) ? tmp+1 : 1; 
    } else {
        saten_pads[i].state[j] = 0;
    }
}

void saten_pad_axis_update(int i, int16_t k, int j)
{
    saten_pads[i].state[j] = k;
}

void saten_pad_filter_deadzone(int i)
{
    float l = sqrtf((float)saten_square(saten_pads[i].state[SATEN_AXS_LX]) +
        (float)saten_square(saten_pads[i].state[SATEN_AXS_LY]));
    if ( l < saten_pads[i].deadzone) {
        saten_pads[i].state[SATEN_AXS_LX] = 0;
        saten_pads[i].state[SATEN_AXS_LY] = 0;
    }
    l = sqrtf((float)saten_square(saten_pads[i].state[SATEN_AXS_RX]) +
        (float)saten_square(saten_pads[i].state[SATEN_AXS_RY]));
    if ( l < saten_pads[i].deadzone) {
        saten_pads[i].state[SATEN_AXS_RX] = 0;
        saten_pads[i].state[SATEN_AXS_RY] = 0;
    }
}

void saten_pad_stick_angle(int i)
{
    saten_pads[i].lang = 180+atan2f((float)saten_pads[i].state[SATEN_AXS_LY],
            (float)saten_pads[i].state[SATEN_AXS_LX]) * (180 / M_PI);
    if (!saten_pads[i].state[SATEN_AXS_LX] &&
            !saten_pads[i].state[SATEN_AXS_LY])
        saten_pads[i].lang = 0.0f;

    saten_pads[i].rang = 180+atan2f((float)saten_pads[i].state[SATEN_AXS_RY],
            (float)saten_pads[i].state[SATEN_AXS_RX]) * (180 / M_PI);
    if (!saten_pads[i].state[SATEN_AXS_RX] &&
            !saten_pads[i].state[SATEN_AXS_RY])
        saten_pads[i].rang = 0.0f;
}

void saten_pad_input_refresh_controller(int i)
{
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_INVALID), 0);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_A), 1);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_B), 2);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_X), 3);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_Y), 4);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_BACK), 5);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_GUIDE), 6);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_START), 7);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_LEFTSTICK), 8);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_RIGHTSTICK), 9);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_LEFTSHOULDER), 10);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_RIGHTSHOULDER), 11);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_DPAD_UP), 12);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_DPAD_DOWN), 13);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_DPAD_LEFT), 14);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_DPAD_RIGHT), 15);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_MAX), 16);

    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_INVALID), 17);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_LEFTX), 18);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_LEFTY), 19);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_RIGHTX), 20);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_RIGHTY), 21);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_TRIGGERLEFT), 22);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_TRIGGERRIGHT), 23);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_MAX), 24);
    if (saten_pads[i].deadzone > 0)
        saten_pad_filter_deadzone(i);
    saten_pad_stick_angle(i);
}

void saten_pad_input_refresh_joystick(int i)
{
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,0),0);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,1),1);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,2),2);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,3),3);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,4),4);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,5),5);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,6),6);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,7),7);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,8),8);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,9),9);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,10),10);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,11),11);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,12),12);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,13),13);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,14),14);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,15),15);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,16),16);

    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,0),18);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,1),19);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,2),20);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,3),21);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,4),22);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,5),23);
    if (saten_pads[i].deadzone > 0)
        saten_pad_filter_deadzone(i);
    saten_pad_stick_angle(i);
}

void saten_controller_add(int i)
{
    if (SDL_NumJoysticks() > saten_pad_num) {
        saten_pad_num = SDL_NumJoysticks();
        saten_pads = (saten_pad*) realloc(saten_pads, saten_pad_num*
                sizeof(saten_pad));
        if (saten_pads == NULL) {
            saten_errhandler(7);
        }
        memset(&saten_pads[i], 0, sizeof(saten_pad));
    }
    if (SDL_IsGameController(i)) {
        saten_pads[i].dev = SDL_GameControllerOpen(i);
        if (saten_pads[i].dev == NULL) {
            saten_errhandler(5);
        } else {
            saten_pads[i].flag = true;
            saten_haptic_init(i);
        }
    } else {
        // joystick
        saten_pads[i].jdev = SDL_JoystickOpen(i);
        if (saten_pads[i].jdev == NULL) {
            saten_errhandler(5);
        } else {
            // joystick accepted
            saten_pads[i].flag = true;
        }
    }
}

void saten_controller_remove(int i)
{
    if (SDL_IsGameController(i)) {
        SDL_GameControllerClose(saten_pads[i].dev);
    } else {
        SDL_JoystickClose(saten_pads[i].jdev);
    }
    memset(&saten_pads[i],0, sizeof(saten_pad));
}
