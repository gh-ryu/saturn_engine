#include "saturn_engine/_lib.h"
#include "_global.h"
#include "helper/scene.h"
#include "scene/root.h"
#include "scene/title.h"
#include "input.h"

void scene_root_init(void)
{
    saten_resource_load("data/mrb/resource/root.rb");

    saten_sprite_texturize(RES(IMG_SATURN_ENGINE_LOGO));

    saten_menu_def_iconsetw(RES(IMG_SATURN_ENGINE_SYSTEM_MENU_ARROW));
    saten_menu_default_sfxw(RES(SFX_SATURN_ENGINE_ACCEPT),
            RES(SFX_SATURN_ENGINE_CANCEL), RES(SFX_SATURN_ENGINE_CURSOR),
            NULL);

    saten_menu_assign_key(input_keyr(accept), input_keyr(cancel));
    saten_menu_assign_btn(input_btnr(accept), input_btnr(cancel));

    saten_video_wpw(RES(IMG_SATURN_ENGINE_LOGO), true);

    saten_sfx_volume(RES(SFX_SATURN_ENGINE_ACCEPT), 30);
    saten_sfx_volume(RES(SFX_SATURN_ENGINE_CANCEL), 20);
    saten_sfx_volume(RES(SFX_SATURN_ENGINE_CURSOR), 38);

    scene_create(SCENE_TITLE, NULL);
}

void scene_root_update(bool c)
{
    if (!saten_input_check())
        saten_key_unlock(-1);
    if (c) {
        if (saten_key(SATEN_KEY_ENTER) == 1)
            saten_sfx_set(RES(SFX_SATURN_ENGINE_ACCEPT));
        if (saten_key(SATEN_KEY_SPACE) == 1)
            saten_sfx_set(RES(SFX_SATURN_ENGINE_CANCEL));
        if (saten_key(SATEN_KEY_A) == 1)
            saten_sfx_set(RES(SFX_SATURN_ENGINE_CURSOR));
        if (saten_key(SATEN_KEY_B) == 1)
            saten_resource_free(BGM_DEMO_TITLE);


        if (saten_key(SATEN_KEY_Z)) {
            scene_create(SCENE_TITLE, NULL);
        }

        //if (saten_key(SATEN_KEY_ESC))
        if (input(cancel))
            saten_scene_quit_from(saten_scene_self());

    }
}

void scene_root_draw(void)
{
    saten_sprite_draw(RES(IMG_SATURN_ENGINE_LOGO), 0, 0, 0, 0, 0);
}

void scene_root_quit(void)
{
    saten_video_wpreset();
}
