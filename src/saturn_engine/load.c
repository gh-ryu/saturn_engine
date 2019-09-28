#include "saturn_engine/_lib.h"

// public
void saten_load_resources(saten_scene_info scene, bool threaded)
{
    saten_load_on_thread = threaded;
    saten_now_loading = scene;
    if (threaded) {
        saten_load_mtx = SDL_CreateMutex();
        if (!saten_load_mtx) {
            saten_errhandler(46);
            saten_kill();
        }
        //TODO
        memset(&saten_vres, 0, sizeof(saten_resmngr));
        saten_mrb_gc_disable();
        saten_load_thread = SDL_CreateThread(saten_load_thread_func,
                          "saten_thread_load", NULL);
    } else {
        // Set uid to check which resources to load (in case file has resources
        // for various scenes
        // something_global = scene.uid;
        // Uses path to a mrb script calling functions to load resources
        FILE *f = NULL;
        saten_fopen(&f, saten_darr_scene[scene.id].loadscriptfp, "r");
        mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
        fclose(f);
        saten_scene_load_done(scene);
    }
}

// private
int saten_load_thread_func(void *ptr)
{
    saten_scene_info scene = saten_scene_get_previous();
    FILE *f = NULL;
    saten_fopen(&f, saten_darr_scene[scene.id].loadscriptfp, "r");
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
    fclose(f);
    //SDL_Delay(2000);
    if (SDL_LockMutex(saten_load_mtx) == 0) {
        saten_scene_load_done(saten_scene_get_previous());
        if (SDL_UnlockMutex(saten_load_mtx) < 0) {
            saten_errhandler(48);
        }
    } else {
        saten_errhandler(47);
    }
    return 0;
}

void saten_load_pass_resources(saten_scene_info scene)
{
    if (saten_scene_exists(scene))
        saten_darr_scene[scene.id].res = saten_vres;
}

// private
mrb_value saten_mrb_load_img(mrb_state *mrb, mrb_value self)
{
    char *string;
    mrb_int mrb_id; int id;
    mrb_bool mrb_opt; bool opt;
    mrb_get_args(saten_mrb, "z|i?", &string, &mrb_id, &mrb_opt);
    id = (int)mrb_id;
    opt = (bool)mrb_opt;
    int i;


    if (!opt || id == saten_now_loading.uid) {
        saten_resmngr *res;
        if (saten_load_on_thread)
            res = &saten_vres;
        else
            res = &(saten_darr_scene[saten_now_loading.id].res);
        // load file if no scene given or if we want to load files for id
        res->sprite_n++;
        i = res->sprite_n;
        res->sprite = saten_realloc(res->sprite, i * sizeof(saten_sprite*));
        res->sprite[i-1] = saten_sprite_load(string);
    }

    return mrb_nil_value();
}

// private
mrb_value saten_mrb_load_sfx(mrb_state *mrb, mrb_value self)
{
    char *string;
    mrb_int mrb_id; int id;
    mrb_bool mrb_opt; bool opt;
    mrb_get_args(saten_mrb, "z|i?", &string, &mrb_id, &mrb_opt);
    id = (int)mrb_id;
    opt = (bool)mrb_opt;
    int i;

    if (!opt || id == saten_now_loading.uid) {
        saten_resmngr *res;
        if (saten_load_on_thread)
            res = &saten_vres;
        else
            res = &(saten_darr_scene[saten_now_loading.id].res);
        // load file if no scene given or if we want to load files for id
        res->sfx_n++;
        i = res->sfx_n;
        res->sfx = saten_realloc(res->sfx, i * sizeof(Mix_Chunk*));
        res->sfx[i-1] = Mix_LoadWAV(string);
    }

    return mrb_nil_value();
}

// private
mrb_value saten_mrb_load_bgm(mrb_state *mrb, mrb_value self)
{
    char *string;
    mrb_int mrb_id; int id;
    mrb_bool mrb_opt; bool opt;
    mrb_get_args(saten_mrb, "z|i?", &string, &mrb_id, &mrb_opt);
    id = (int)mrb_id;
    opt = (bool)mrb_opt;
    int i;

    if (!opt || id == saten_now_loading.uid) {
        saten_resmngr *res;
        if (saten_load_on_thread)
            res = &saten_vres;
        else
            res = &(saten_darr_scene[saten_now_loading.id].res);
        // load file if no scene given or if we want to load files for id
        res->bgm_n++;
        i = res->bgm_n;
        res->bgm = saten_realloc(res->bgm, i * sizeof(saten_music*));
        res->bgm[i-1] = saten_muload(string);
    }

    return mrb_nil_value();
}

// private
mrb_value saten_mrb_load_text(mrb_state *mrb, mrb_value self)
{
    char *string;
    mrb_int mrb_id; int id;
    mrb_bool mrb_opt; bool opt;
    mrb_get_args(saten_mrb, "z|i?", &string, &mrb_id, &mrb_opt);
    id = (int)mrb_id;
    opt = (bool)mrb_opt;
    int i;

    if (!opt || id == saten_now_loading.uid) {
        saten_resmngr *res;
        if (saten_load_on_thread)
            res = &saten_vres;
        else
            res = &(saten_darr_scene[saten_now_loading.id].res);
        res->text_n++;
        i = res->text_n;
        res->text = saten_realloc(res->text, i * sizeof(saten_text*));
        res->text[i-1] = saten_text_create(1.0, string, 0, 0);
    }

    return mrb_nil_value();
}
