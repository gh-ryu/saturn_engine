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

SATEN_GLOBAL scenemngr scene;

#endif /* GLOBAL */
