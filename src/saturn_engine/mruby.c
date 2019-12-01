#include "saturn_engine/_lib.h"

static struct RClass* _saten_mrb_module_resource;
static struct RClass* _saten_mrb_module_img;
static struct RClass* _saten_mrb_module_sfx;
static struct RClass* _saten_mrb_module_bgm;
static struct RClass* _saten_mrb_module_text;

void saten_mruby_init(void)
{

    // Define Modules
    _saten_mrb_module_resource = mrb_define_module_under(saten_mrb,
        _saten_mrb_module, "Resource");
    _saten_mrb_module_img = mrb_define_module_under(saten_mrb,
        _saten_mrb_module_resource, "Sprite");
    _saten_mrb_module_sfx = mrb_define_module_under(saten_mrb,
        _saten_mrb_module_resource, "SoundEffect");
    _saten_mrb_module_bgm = mrb_define_module_under(saten_mrb,
        _saten_mrb_module_resource, "BackgroundMusic");
    _saten_mrb_module_text = mrb_define_module_under(saten_mrb,
        _saten_mrb_module_resource, "Text");

    // Load modules
    FILE *f = NULL;
    saten_fopen(&f, SATEN_FNAME_MRB_RESOURCEM, "r");
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
    fclose(f);

    // Initialize mruby environment
    saten_fopen(&f, SATEN_FNAME_MRB_INIT, "r");
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
    fclose(f);

    saten_fopen(&f, SATEN_FNAME_MRB_CONFIG, "r");
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
    fclose(f);

    // Define functions

    mrb_define_module_function(saten_mrb, _saten_mrb_module_resource,
            "load", saten_mrb_load, MRB_ARGS_REQ(2));
    mrb_define_module_function(saten_mrb, _saten_mrb_module_text,
            "from_doc", saten_mrb_load_text, MRB_ARGS_ARG(2,1));
}

struct RClass* saten_mruby_module(int t)
{
    switch (t) {
    case SATEN_MRB_MOD_RESOURCE:
        return _saten_mrb_module_resource;
        break;
    case SATEN_MRB_MOD_SPRITE:
        return _saten_mrb_module_img;
        break;
    case SATEN_MRB_MOD_SOUNDEFFECT:
        return _saten_mrb_module_sfx;
        break;
    case SATEN_MRB_MOD_BACKGROUNDMUSIC:
        return _saten_mrb_module_bgm;
        break;
    case SATEN_MRB_MOD_TEXT:
        return _saten_mrb_module_text;
        break;
    }
    return NULL;
}
