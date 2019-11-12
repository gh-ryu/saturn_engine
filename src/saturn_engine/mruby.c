#include "saturn_engine/_lib.h"

void saten_mruby_init(void)
{
    struct RClass* _saten_mrb_module_resource;
    struct RClass* _saten_mrb_module_img;
    struct RClass* _saten_mrb_module_sfx;
    struct RClass* _saten_mrb_module_bgm;
    struct RClass* _saten_mrb_module_text;

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

    // Define functions
    mrb_define_module_function(saten_mrb, _saten_mrb_module_img,
            "dir", saten_mrb_load_img_dir, MRB_ARGS_REQ(1));
    mrb_define_module_function(saten_mrb, _saten_mrb_module_sfx,
            "dir", saten_mrb_load_sfx_dir, MRB_ARGS_REQ(1));
    mrb_define_module_function(saten_mrb, _saten_mrb_module_bgm,
            "dir", saten_mrb_load_bgm_dir, MRB_ARGS_REQ(1));
    mrb_define_module_function(saten_mrb, _saten_mrb_module_img,
            "load", saten_mrb_load_img, MRB_ARGS_REQ(1));
    mrb_define_module_function(saten_mrb, _saten_mrb_module_sfx,
            "load", saten_mrb_load_sfx, MRB_ARGS_REQ(1));
    mrb_define_module_function(saten_mrb, _saten_mrb_module_bgm,
            "load", saten_mrb_load_bgm, MRB_ARGS_REQ(1));
    //mrb_define_module_function(saten_mrb, _saten_mrb_module_text,
    //        "load", saten_mrb_load_text, MRB_ARGS_ARG(1,1));
    mrb_define_module_function(saten_mrb, _saten_mrb_module_text,
            "load", saten_mrb_load_text, MRB_ARGS_REQ(1));

    mrb_define_module_function(saten_mrb, _saten_mrb_module_resource,
            "set_scene", saten_mrb_load_set_scene, MRB_ARGS_REQ(1));
}
