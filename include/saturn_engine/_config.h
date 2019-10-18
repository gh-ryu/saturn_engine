#ifndef SATURN_ENGINE_CONFIG
#define SATURN_ENGINE_CONFIG

/* Recommended app width x height values
 * 288x216 SD
 * 384x216 SD Widescreen
 * 640x360 VGA Widescreen
 */

#define SATEN_FRAMERATE 60
#define SATEN_GAME_WIDTH 288
#define SATEN_GAME_HEIGHT 216

#define SATEN_PLAYER_NUM 4

#define SATEN_VOUT_DEFAULT SATEN_VOUT_640x480 // scanlined sd is default
#define SATEN_WIDESCREEN_LOCK false // true = game requires widescreen VOUT
#define SATEN_GSCALE_DEFAULT 2 //  default scale factor for game graphics

#define SATEN_MENU_ROWLEN_DEFAULT 4
#define SATEN_MENU_COLLEN_DEFAULT 1
#define SATEN_MENU_HPADDING_DEFAULT 16
#define SATEN_MENU_VPADDING_DEFAULT 16

#endif /* SATURN_ENGINE_CONFIG */
