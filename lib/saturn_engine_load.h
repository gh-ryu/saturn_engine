// public
void saten_load_resources(saten_scene_info scene, char *fp)
{
    // Set uid to check which resources to load (in case file has resources
    // for various scenes
    // something_global = scene.uid;
    // Uses path to a mrb script calling functions to load resources
    FILE *f = NULL;
    saten_fopen(&f, fp, "r");
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
    fclose(f);
}
