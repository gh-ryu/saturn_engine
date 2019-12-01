#ifndef SATURN_ENGINE_LOAD
#define SATURN_ENGINE_LOAD

void saten_load_text_each(void);
mrb_value saten_mrb_load(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_img(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_sfx(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_bgm(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_load_text(mrb_state *mrb, mrb_value self);

#endif /* SATURN_ENGINE_LOAD */
