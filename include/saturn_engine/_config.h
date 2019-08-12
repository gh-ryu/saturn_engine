#ifndef SATURN_ENGINE_CONFIG
#define SATURN_ENGINE_CONFIG

/* Recommended app width x height values
 * 288x216 SD
 * 384x216 SD Widescreen
 * 640x360 VGA Widescreen
 */
#define SATEN_GAME_WIDTH 288
#define SATEN_GAME_HEIGHT 216

#define SATEN_VOUT_DEFAULT SATEN_VOUT_640x480 // scanlined sd is default
#define SATEN_WIDESCREEN_LOCK false // true = game requires widescreen VOUT
#define SATEN_GSCALE_DEFAULT 2 //  default scale factor for game graphics

#endif /* SATURN_ENGINE_CONFIG */
