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

typedef struct _saten_vstng {
    uint8_t scale;
    bool fullscreen;
    bool fullscreend; // SDL_FULLSCREEN_DESKTOP
    bool filter_flag; // filter activated?
    uint8_t filter; // currently active filter
    SDL_Color wpcol;
    uint8_t vout;
} saten_vstng;

#endif /* SATURN_ENGINE_STRUCT */
