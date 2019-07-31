// public
void saten_load_resources(saten_scene_info scene, char *fp)
{
    // Set uid to check which resources to load (in case file has resources
    // for various scenes
    // something_global = scene.uid;
    saten_now_loading = scene;
    // Uses path to a mrb script calling functions to load resources
    FILE *f = NULL;
    saten_fopen(&f, fp, "r");
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
    fclose(f);
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

    if (!opt || id == saten_now_loading.uid) {
        // load file if no scene given or if we want to load files for id
        saten_asset.sprite_n++;
        saten_asset.sprite = saten_realloc(saten_asset.sprite,
                (saten_asset.sprite_n) * sizeof(saten_sprite));
        saten_asset.sprite[saten_asset.sprite_n-1] = saten_sprite_load(string);
        saten_darr_scene[saten_now_loading.id].asset_num_sprite++;
    }

    return mrb_nil_value();
}

// private
mrb_value saten_mrb_load_sfx(mrb_state *mrb, mrb_value self)
{
    return mrb_nil_value();
}

// private
mrb_value saten_mrb_load_bgm(mrb_state *mrb, mrb_value self)
{
    return mrb_nil_value();
}

// private
mrb_value saten_mrb_load_text(mrb_state *mrb, mrb_value self)
{
    return mrb_nil_value();
}
