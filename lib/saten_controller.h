void saten_pad_input_refresh(int i)
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
    saten_pad_filter_deadzone(i);
    saten_pad_stick_angle(i);
}

uint32_t saten_btn(uint8_t i, int j)
{
    return saten_pads[j].state[i];
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
    float l = sqrtf((float)square(saten_pads[i].state[SATEN_AXS_LX]) +
        (float)square(saten_pads[i].state[SATEN_AXS_LY]));
    if ( l < saten_analog_deadzone) {
        saten_pads[i].state[SATEN_AXS_LX] = 0;
        saten_pads[i].state[SATEN_AXS_LY] = 0;
    }
    l = sqrtf((float)square(saten_pads[i].state[SATEN_AXS_RX]) +
        (float)square(saten_pads[i].state[SATEN_AXS_RY]));
    if ( l < saten_analog_deadzone) {
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
