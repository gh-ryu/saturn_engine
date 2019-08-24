#ifndef GLOBAL
#define GLOBAL

typedef struct _scenemngr { // index 0: uid, index 1: position id
    saten_scene_info root;
    saten_scene_info title;
    saten_scene_info title_menu; // subscenes may use assets from prev scene
    saten_scene_info title_menu_settings;
    saten_scene_info game;
    saten_scene_info load;
} scenemngr;

typedef struct _inputcntr {
    uint8_t accept;
    uint8_t cancel;
    uint8_t pause;
    uint8_t mainshot;
    uint8_t subshot;
    uint8_t up;
    uint8_t down;
    uint8_t right;
    uint8_t left;
    uint8_t switchwpn;
    uint8_t slow;
} inputcntr;

SATEN_GLOBAL scenemngr scene;

#endif /* GLOBAL */
