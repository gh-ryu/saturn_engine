typedef struct _saten_scene_info {
    uint8_t uid; // unique id given by user
    uint8_t id; // dynamic id given by engine
} saten_scene_info;

typedef struct _saten_scene {
    saten_fptr_void init;
    saten_fptr_bool update;
    saten_fptr_void draw;
    saten_fptr_void quit;
    //char *fname_loadscript;
    bool load_flag;
    bool init_flag;
    bool quit_flag;
    // IDs moved to info substruct
    //uint8_t id; // defines order
    //uint8_t uid; // unique id to identify scene (load proper resources etc.)
    saten_scene_info info;
    int asset_num_sprite;
    int asset_num_sfx;
    int asset_num_bgm;
    int asset_num_text;
} saten_scene;
