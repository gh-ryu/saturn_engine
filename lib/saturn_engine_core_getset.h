void saten_set_fps(int fps)
{
    saten_framectrl.fps = fps;
}

void saten_set_stick_deadzone(int16_t dz, int i)
{
    saten_pads[i].deadzone = dz;
}

float saten_get_avg_fps(void)
{
    return saten_framectrl.avg;
}

float saten_get_right_stick_angle(int i)
{
    return saten_pads[i].rang;
}

float saten_get_left_stick_angle(int i)
{
    return saten_pads[i].lang;
}

// public
void saten_set_target_layer(saten_layer *lay)
{
    saten_target_layer = lay;
}

SDL_Haptic* saten_get_haptic(int i)
{
    return saten_pads[i].hdev;
}
