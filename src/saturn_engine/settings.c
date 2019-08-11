#include "saturn_engine/_lib.h"

saten_stng settings;

// public
void saten_settings_add_resolution(int x, int y)
{
}

// public
void saten_settings_set_wp_(uint8_t id)
{
    settings.wp = id;
}

// public
void saten_settings_set_wp_color(uint8_t r, uint8_t g, uint8_t b,
        uint8_t a)
{
}

// private
void saten_settings_load(void)
{
}

// private
void saten_settings_init(void)
{
    settings.scale = 1;
    settings.fullscreen = false;
    settings.fullscreend = false;
    settings.filter_flag = false;
    settings.filter = 0;
    settings.wp = 0;
    settings.wpcol.r = 0;
    settings.wpcol.g = 0;
    settings.wpcol.b = 0;
    settings.wpcol.a = 0;
    settings.vout = SATEN_VOUT_DEFAULT;
}
