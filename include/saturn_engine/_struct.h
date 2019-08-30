#ifndef SATURN_ENGINE_STRUCT
#define SATURN_ENGINE_STRUCT

typedef struct _saten_scene_info {
    uint8_t uid; // unique id given by user
    uint8_t id; // dynamic id given by engine
    bool alive;
} saten_scene_info;

typedef struct _saten_scene {
    saten_fptr_void init;
    saten_fptr_bool update;
    saten_fptr_void draw;
    saten_fptr_void quit;
    bool load_flag;
    bool init_flag;
    bool quit_flag;
    uint64_t framecnt; // current frame
    saten_scene_info info;
    saten_resmngr res;
    char *loadscriptfp; // file path for associated load script
} saten_scene;

typedef struct _saten_vinfo {
    float scale;
    uint8_t mode;
} saten_vinfo;

typedef struct _saten_vstng {
    float scale;
    bool fullscreen;
    bool fullscreend; // SDL_FULLSCREEN_DESKTOP
    bool filter_flag; // filter activated?
    uint8_t filter; // currently active filter
    uint8_t scanline_strength;
    SDL_Color wpcol;
    bool wprepeat;
    saten_sprite *wp;
    uint8_t vout;
    bool update; // flag
} saten_vstng;

typedef struct _saten_btnmap {
} saten_btnmap;

typedef struct _saten_keymap {
} saten_keymap;

typedef struct _saten_player {
    bool keyboardf; // uses keyboard
    bool controllerf; // uses controller
    int  padid; // controller associated with player
    saten_btnmap btn;
    saten_keymap key;
    bool flag; // player enabled? disabled?
} saten_player;

typedef struct _saten_tile {
    int id; // index for graphic
    int layer; // layer id
    bool pass_upf;
    bool pass_downf;
    bool pass_rightf;
    bool pass_leftf;
} saten_tile;

typedef struct _saten_background {
    saten_layer *layer; // To draw sprites on a surface
    SDL_Texture *texture; // Uses pixel data from layer's surface
    saten_sprite *tilset;
    saten_tile *tiles;
    SDL_Rect tilemap; // The whole map used by the background
    SDL_Rect screen; // The screen drawn to the renderer
} saten_background;

#endif /* SATURN_ENGINE_STRUCT */
