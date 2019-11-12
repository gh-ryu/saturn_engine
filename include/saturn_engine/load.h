#ifndef SATURN_ENGINE_LOAD
#define SATURN_ENGINE_LOAD

void saten_load_resources(saten_scene_info scene, bool threaded);
int saten_load_thread_func(void *ptr);
void saten_load_pass_resources(saten_scene_info scene);
mrb_value saten_mrb_load_img(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_sfx(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_bgm(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_text(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_set_scene(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_img_dir(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_sfx_dir(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_bgm_dir(mrb_state *mrb, mrb_value self);

#endif /* SATURN_ENGINE_LOAD */
