#ifndef SATURN_ENGINE_CONFIG_VIDEO
#define SATURN_ENGINE_CONFIG_VIDEO

/* Recommended app width x height values
 * 288x216 SD
 * 384x216 SD Widescreen
 * 640x360 VGA Widescreen
 */

#define SATEN_CONF_FRAMERATE 60

#define SATEN_CONF_GAME_WIDTH 320
#define SATEN_CONF_GAME_HEIGHT 240

#define SATEN_CONF_VOUT_DEFAULT SATEN_VOUT_640x480 // scanlined sd is default
#define SATEN_CONF_WIDESCREEN_LOCK false //true = game requires widescreen VOUT
#define SATEN_CONF_GSCALE_DEFAULT 2 //  default scale factor for game graphics

#endif /* SATURN_ENGINE_CONFIG_VIDEO */
