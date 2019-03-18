void saten_set_fps(int fps)
{
    saten_fps.fps = fps;
}

void saten_set_stick_deadzone(int16_t dz, int i)
{
    saten_pads[i].deadzone = dz;
}

float saten_get_avg_fps(void)
{
    return saten_fps.avg;
}

float saten_get_right_stick_angle(int i)
{
    return saten_pads[i].rang;
}

float saten_get_left_stick_angle(int i)
{
    return saten_pads[i].lang;
}
