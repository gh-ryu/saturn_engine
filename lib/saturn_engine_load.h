// public
void saten_load_resources(saten_scene_info scene, bool threaded)
{
    saten_load_on_thread = threaded;
    saten_now_loading = scene;
    if (threaded) {
        //TODO
        printf("a\n");
        //saten_resource_free(saten_vres);
        //saten_resource_reset(&saten_vres);
        printf("b\n");
        memset(&saten_vres, 0, sizeof(saten_resmngr));
        printf("c\n");
        saten_load_thread = SDL_CreateThread(saten_load_thread_func,
                          "saten_thread_load", NULL);
        printf("d\n");
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
    SDL_Delay(2000);
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
        /*
        saten_asset.sprite_n++;
        saten_asset.sprite = saten_realloc(saten_asset.sprite,
                (saten_asset.sprite_n) * sizeof(saten_sprite*));
        saten_asset.sprite[saten_asset.sprite_n-1] = saten_sprite_load(string);
        */
        res->sprite_n++;
        i = res->sprite_n;
        res->sprite = saten_realloc(res->sprite, i * sizeof(saten_sprite*));
        res->sprite[i-1] = saten_sprite_load(string);
        //saten_darr_scene[saten_now_loading.id].asset_num_sprite++;
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
        /*
        saten_asset.sfx_n++;
        saten_asset.sfx = saten_realloc(saten_asset.sfx,
                (saten_asset.sfx_n) * sizeof(Mix_Chunk*));
        saten_asset.sfx[saten_asset.sfx_n-1] = Mix_LoadWAV(string);
        */
        res->sfx_n++;
        i = res->sfx_n;
        res->sfx = saten_realloc(res->sfx, i * sizeof(Mix_Chunk*));
        res->sfx[i-1] = Mix_LoadWAV(string);
        //saten_darr_scene[saten_now_loading.id].asset_num_sfx++;
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
        /*
        saten_asset.bgm_n++;
        saten_asset.bgm = saten_realloc(saten_asset.bgm,
                (saten_asset.bgm_n) * sizeof(Mix_Music*));
        saten_asset.bgm[saten_asset.bgm_n-1] = Mix_LoadMUS(string);
        */
        res->bgm_n++;
        i = res->bgm_n;
        res->bgm = saten_realloc(res->bgm, i * sizeof(Mix_Music*));
        res->bgm[i-1] = Mix_LoadMUS(string);
        //saten_darr_scene[saten_now_loading.id].asset_num_bgm++;
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
        /*
        saten_asset.text_n++;
        saten_asset.text = saten_realloc(saten_asset.text,
                (saten_asset.text_n) * sizeof(saten_text*));
        saten_asset.text[saten_asset.text_n-1] = saten_text_create(1.0, string,
                0, 0);
        */
        res->text_n++;
        i = res->text_n;
        res->text = saten_realloc(res->text, i * sizeof(saten_text*));
        res->text[i-1] = saten_text_create(1.0, string, 0, 0);
        //saten_darr_scene[saten_now_loading.id].asset_num_text++;
    }

    return mrb_nil_value();
}
