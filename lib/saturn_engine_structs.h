typedef struct _saten_scene {
    saten_fptr_void init;
    saten_fptr_bool update;
    saten_fptr_void draw;
    saten_fptr_void quit;
    //char *fname_loadscript;
    bool load_flag;
    bool init_flag;
    bool quit_flag;
    uint8_t id; // defines order
    uint8_t uid; // unique id to identify scene (load proper resources etc.)
} saten_scene;
