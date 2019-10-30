#ifndef SATURN_ENGINE_CONFIG
#define SATURN_ENGINE_CONFIG

#define SATEN_CONF_GAME_NAME "saturn_engine_demo"

/* Recommended app width x height values
 * 288x216 SD
 * 384x216 SD Widescreen
 * 640x360 VGA Widescreen
 */

#define SATEN_CONF_FRAMERATE 60
#define SATEN_CONF_GAME_WIDTH 288
#define SATEN_CONF_GAME_HEIGHT 216

#define SATEN_CONF_PLAYER_NUM 4

#define SATEN_CONF_VOUT_DEFAULT SATEN_VOUT_640x480 // scanlined sd is default
#define SATEN_CONF_WIDESCREEN_LOCK false //true = game requires widescreen VOUT
#define SATEN_CONF_GSCALE_DEFAULT 2 //  default scale factor for game graphics

#define SATEN_CONF_MENU_ROWLEN_DEFAULT 4
#define SATEN_CONF_MENU_COLLEN_DEFAULT 1
#define SATEN_CONF_MENU_HPADDING_DEFAULT 16
#define SATEN_CONF_MENU_VPADDING_DEFAULT 16

#endif /* SATURN_ENGINE_CONFIG */
