/*
  Saturn Engine - Demo game
*/

#include "lib/saturn_engine.h"

/*
typedef struct _scenemngr {
    saten_scene *root; // root scene that loads all assets shared by scenes
    saten_scene *title;
    saten_scene *settings;
} scenemngr;
*/


typedef struct _scenemngr { // index 0: uid, index 1: position id
    saten_scene_info root;
    saten_scene_info title;
    saten_scene_info title_menu; // subscenes may use assets from prev scene
    saten_scene_info title_menu_settings;
    saten_scene_info game;
} scenemngr;

// Declarations
void scene_root_init(void);
void scene_root_update(bool c);
void scene_root_draw(void);
void scene_root_quit(void);
void scene_title_init(void);
void scene_title_update(bool c);
void scene_title_draw(void);
void scene_title_quit(void);
scenemngr scene = { 0 };

int main (int argc, char *argv[])
{
    // Engine initialization
    if (saten_init("saturn_engine_demo", 320, 240, SATEN_MRBLOAD) < 0)
        fprintf(stderr, "Init error...\n");
    // Setting up unique IDs for scenes //TODO let a function handle this?
    scene.root.uid = 0;
    scene.title.uid = 1;
    scene.title_menu.uid = 2;
    scene.title_menu_settings.uid = 3;
    scene.game.uid = 4;
    // Create root scene
    scene.root = saten_scene_create(scene.root, scene_root_init,
            scene_root_update, scene_root_draw, scene_root_quit);
    // Run the game loop
    saten_run();

    return 0;
}

void scene_root_init(void)
{
    // load global resouces (menu soundeffects, load screen stuff)
    saten_load_resources(scene.root, "script/load_resources.rb");
    saten_sprite_texturize(saten_asset.sprite[0]);
    saten_sfx_reset();
    saten_audio_sfx_set_vol(0, 30);
    saten_audio_sfx_set_vol(1, 20);
    saten_audio_sfx_set_vol(2, 38);
    saten_scene_initialized(scene.root);
    scene.title = saten_scene_create(scene.title, scene_title_init,
            scene_title_update, scene_title_draw, scene_title_quit);
    saten_scene_set_start(scene.title);
}
void scene_root_update(bool c)
{
    if (c) {
        if (saten_key(SATEN_KEY_ENTER) == 1)
            saten_sfx_set(0);
        if (saten_key(SATEN_KEY_SPACE) == 1)
            saten_sfx_set(1);
        if (saten_key(SATEN_KEY_A) == 1)
            saten_sfx_set(2);

        saten_sfx_play();
        saten_sfx_unset(-1);
    }
}
void scene_root_draw(void)
{
    saten_sprite_draw(saten_asset.sprite[0], 0, 0, 0, 0, 0);
}
void scene_root_quit(void)
{
}

void scene_title_init(void)
{
    saten_scene_initialized(scene.title);
}

void scene_title_update(bool c)
{
}

void scene_title_draw(void)
{
}

void scene_title_quit(void)
{
}
