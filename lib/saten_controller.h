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
