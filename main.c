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
    saten_scene_info load;
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
void scene_load_init(void);
void scene_load_update(bool c);
void scene_load_draw(void);
void scene_load_quit(void);
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
    scene.load.uid = 255;
    // Create root scene
    scene.root = saten_scene_create(scene.root, scene_root_init,
            scene_root_update, scene_root_draw, scene_root_quit,
            "script/load_resources.rb");
    // Run the game loop
    saten_run();

    return 0;
}

void scene_root_init(void)
{
    // load global resouces (menu soundeffects, load screen stuff)
    saten_load_resources(scene.root, false);
    //saten_sprite_texturize(saten_asset.sprite[0]);
    if (saten_scene_loaded(scene.root)) {
        saten_sprite_texturize(saten_resource_sprite(scene.root, 0));
        saten_sfx_reset(scene.root);
        saten_sfx_volume(scene.root, 0, 30);
        saten_sfx_volume(scene.root, 1, 20);
        saten_sfx_volume(scene.root, 2, 38);
        //saten_text_update(saten_asset.text[0], NULL, 2.0, 20, 20);
        saten_scene_init_done(scene.root);
        /*
        scene.title = saten_scene_create(scene.title, scene_title_init,
                scene_title_update, scene_title_draw, scene_title_quit,
                "script/load_resources.rb");
        saten_scene_set_start(scene.title);
        */
    }
    
    
}
void scene_root_update(bool c)
{
    if (!saten_input_check())
        saten_key_unlock(-1);
    if (c) {
        if (saten_key(SATEN_KEY_ENTER) == 1)
            saten_sfx_set(scene.root, 0);
        if (saten_key(SATEN_KEY_SPACE) == 1)
            saten_sfx_set(scene.root, 1);
        if (saten_key(SATEN_KEY_A) == 1)
            saten_sfx_set(scene.root, 2);

        
        if (saten_key(SATEN_KEY_Z) > 120) {
            scene.title = saten_scene_create(scene.title, scene_title_init,
                    scene_title_update, scene_title_draw, scene_title_quit,
                    "script/load_resources.rb");
            saten_scene_set_start(scene.title);
        }
        

        saten_sfx_play(scene.root);
        saten_sfx_unset(scene.root, -1);
    }
}

void scene_root_draw(void)
{
    //saten_sprite_draw(saten_asset.sprite[0], 0, 0, 0, 0, 0);
    saten_sprite_draw(saten_resource_sprite(scene.root, 0), 0, 0, 0, 0, 0);
}

void scene_root_quit(void)
{
}

void scene_title_init(void)
{
    saten_key_lock(-1); // lock all keys
    if (!saten_scene_loaded(scene.title)) // important!
        scene.load = saten_scene_create(scene.load, scene_load_init,
                scene_load_update, scene_load_draw, scene_load_quit,
                "script/load_resources.rb");
    // make sure load screen has passed
    if (saten_scene_loaded(scene.title) && !saten_scene_exists(scene.load)) {
        saten_sprite_texturize(saten_resource_sprite(scene.title, 0));
        saten_sprite_scale(saten_resource_sprite(scene.title, 0), 0.5f);
        saten_scene_init_done(scene.title);
    }
}

void scene_title_update(bool c)
{
    // unlock buttons when user stopped giving input for even a frame
    if (!saten_input_check())
        saten_key_unlock(-1);
    // or unlock buttons after a number of frames
    if (saten_scene_frame(scene.title) >= 260)
        saten_key_unlock(-1);
    if (c) {
        if (saten_key(SATEN_KEY_Z) >= 120) {
            saten_key_lock(-1);
            saten_scene_quit(scene.title);
        }
    }
}

void scene_title_draw(void)
{
    //saten_text_draw(saten_asset.text[0]);
    saten_sprite_draw(saten_resource_sprite(scene.title, 0),
            0, 0, 0, 0, 0);
}

void scene_title_quit(void)
{
    scene.title = saten_scene_destroy(scene.title);
    saten_scene_set_start(scene.root);
}

void scene_load_init(void)
{
    saten_load_resources(scene.load, false);
    //saten_scene_load_done(scene.load);
    if (saten_scene_loaded(scene.load)) {
        saten_text_update(saten_resource_text(scene.load, 0),
                NULL, 2.0, 20, 20);
        saten_sprite_set_tiles(saten_resource_sprite(scene.load, 0), 2, 1);
        saten_sprite_texturize(saten_resource_sprite(scene.load, 0));
        saten_scene_init_done(scene.load);
        saten_load_resources(saten_scene_get_previous(), true);
    }
}

void scene_load_update(bool c)
{
    if (saten_scene_loaded(saten_scene_get_previous())) {
        saten_load_pass_resources(saten_scene_get_previous());
        saten_scene_quit(scene.load);
    }
}

void scene_load_draw(void)
{
    saten_text_draw(saten_resource_text(scene.load, 0));
    if (saten_step % 60) {
        saten_sprite_draw(saten_resource_sprite(scene.load, 0),
                0, 160, 120, 0, 0);
    }
    else {
        saten_sprite_draw(saten_resource_sprite(scene.load, 0),
                1, 160, 120, 0, 0);
    }
}

void scene_load_quit(void)
{
    scene.load = saten_scene_destroy(scene.load);
}
