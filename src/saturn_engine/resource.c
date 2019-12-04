#include "saturn_engine/_lib.h"
//#include "vendor/tinydir.h"

static saten_resource *res;
static int res_n;
static int *just_loaded;

saten_resource* saten_resource_access(int id) /* PRIVATE */
{
    return res+id;
}

void saten_resource_init(void) /* PRIVATE */
{
    mrb_value mrbres_n;
    mrb_funcall(saten_mrb, mrb_obj_value(saten_mruby_module(
                    SATEN_MRB_MOD_RESOURCE)), "read_table", 0);
    mrbres_n = mrb_funcall(saten_mrb, mrb_obj_value(saten_mruby_module(
                    SATEN_MRB_MOD_RESOURCE)), "table_size", 0);
    mrb_funcall(saten_mrb, mrb_obj_value(saten_mruby_module(
                    SATEN_MRB_MOD_RESOURCE)), "clear_table", 0);
    //res = saten_realloc(res,
    //        (int)mrb_fixnum(mrbres_n) * sizeof(saten_resource));
    res = saten_malloc((int)mrb_fixnum(mrbres_n) * sizeof(saten_resource));
    res_n = (int)mrb_fixnum(mrbres_n);
    for (int i = 0; i < res_n; i++)
        res[i].type = -1; // Uninitialized type
    SATEN_DARR_INIT(int, just_loaded);
}

void saten_resource_quit(void) /* PRIVATE */
{
    saten_resource_free_all();
    free(res);
    SATEN_DARR_DESTROY(just_loaded);
}

void* saten_resource_fetch(int id) /* PRIVATE */
{
    if (res[id].flag)
        return res[id].data;
    return NULL;
}

void saten_resource_loading(int id) /* PRIVATE */
{
    SATEN_DARR_PUSH(just_loaded, id);
}

void saten_resource_load(const char *str) /* PUBILC */
{
    // Prepare
    SATEN_DARR_RESIZE(just_loaded, 0);
    mrb_funcall(saten_mrb, mrb_obj_value(saten_mruby_module(
                    SATEN_MRB_MOD_RESOURCE)), "read_table", 0);
    FILE *f = NULL;
    saten_fopen(&f, str, "r");

    // Load stuff
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);

    // Clean up
    fclose(f);
    mrb_funcall(saten_mrb, mrb_obj_value(saten_mruby_module(
                    SATEN_MRB_MOD_RESOURCE)), "clear_table", 0);
    saten_resource_sfx_push();

}

void saten_resource_load_only(const char *str) /* PUBLIC */
{
    bool unload;
    // Prepare
    SATEN_DARR_RESIZE(just_loaded, 0);
    mrb_funcall(saten_mrb, mrb_obj_value(saten_mruby_module(
                    SATEN_MRB_MOD_RESOURCE)), "read_table", 0);
    FILE *f = NULL;
    saten_fopen(&f, str, "r");

    // Load stuff
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);

    // Clean up
    fclose(f);
    mrb_funcall(saten_mrb, mrb_obj_value(saten_mruby_module(
                    SATEN_MRB_MOD_RESOURCE)), "clear_table", 0);
    for (int i = 0; i < res_n; i++) {
        unload = false;
        for (int j = 0; j < SATEN_DARR_SIZE(just_loaded); j++) {
            if (just_loaded[j] == i) {
                unload = true;
                break;
            }
        }
        if (unload)
            saten_resource_free(i);
    }
    saten_resource_sfx_push();
}

void saten_resource_free(int id) /* PUBLIC */
{
    if (res[id].flag && res[id].data) {
        switch (res[id].type) {
        case SATEN_RESOURCE_SPRITE:
            saten_sprite_free(res[id].data);
            break;
        case SATEN_RESOURCE_SOUND:
            saten_sound_free(res[id].data);
            break;
        case SATEN_RESOURCE_MUSIC:
            if (saten_music_playback_check(res[id].data))
                saten_bgmstop();
            saten_music_free(res[id].data);
            break;
        case SATEN_RESOURCE_TEXT:
            saten_text_free(res[id].data);
            break;
        }
        res[id].data = NULL;
        res[id].flag = false;
    }

}

void saten_resource_free_all(void) /* PUBLIC */
{
    for (int i = 0; i < res_n; i++)
        saten_resource_free(i);
}

void saten_resource_sfx_push(void) /* PRIVATE */
{
    // All currently loaded sfx IDs are to be registered in sfx module
    saten_sfx_refresh_loaded_effects();
    for (int i = 0; i < res_n; i++) {
        if (res[i].type == SATEN_RESOURCE_SOUND && res[i].flag)
            saten_sfx_push_loaded_effect(i);
    }
}
