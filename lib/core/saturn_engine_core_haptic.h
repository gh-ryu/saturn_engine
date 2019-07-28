void saten_rumble(int i, float str, uint32_t l)
{
    if (saten_pads[i].can_rumble) {
        if (SDL_HapticRumblePlay(saten_pads[i].hdev, str, l) < 0) {
            // error
            saten_errhandler(10);
        }
    }
}

void saten_rumble_stop(int i)
{
    if (SDL_HapticRumbleStop(saten_pads[i].hdev) < 0) {
        // error
        saten_errhandler(11);
    }
}

void saten_haptic_init(int i)
{
    // get haptic device for force feedback
    saten_pads[i].hdev = SDL_HapticOpenFromJoystick(
            SDL_GameControllerGetJoystick(saten_pads[i].dev));
    if (saten_pads[i].hdev == NULL) {
        saten_errhandler(8);
    } else {
        saten_rumble_init(i);
    }
}

void saten_rumble_init(int i)
{
    // setup simple rumble
    int b;
    if ((b = SDL_HapticRumbleSupported(saten_pads[i].hdev)) >= 0) {
        if (b) {
            if (SDL_HapticRumbleInit(saten_pads[i].hdev) < 0) {
                // error
                saten_errhandler(9);
            } else {
                // rumble initialized
                saten_pads[i].can_rumble = b;
            }
        }
    } else {
        saten_errhandler(9);
    }
}
