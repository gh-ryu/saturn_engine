#ifndef SATURN_ENGINE_CORE_TEXT
#define SATURN_ENGINE_CORE_TEXT

void saten_mrb_text_init(void);
mrb_value saten_mrb_text_glyph_init(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_load_glyph_file(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_create(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_free(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_prepare_glyph(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_append_glyph(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_set_height(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_get(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_reset(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_set_size(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_remap(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_remap_reset(mrb_state *mrb, mrb_value self);
void saten_text_draw(saten_text *text);
saten_text* saten_text_create(float scale, char *str, int x, int y, int col);
void saten_text_set_gheight(int a);
void saten_text_destroy(saten_text *ptr);
int saten_text_get_id(void);
void saten_text_search_id(void *item, int i, int num);
saten_text* saten_text_find(int id);
void saten_text_get(void *item, int i, int num);
void saten_nstot(saten_text *text, char *str, int col, int x, int y);
void saten_text_glyph_create(int a, int b, int c, int x, int y, int l,
        saten_text *text);
void saten_text_update(saten_text* text, char *str,
        float scale, int x, int y);
void saten_text_set_data(saten_text *text);
int saten_get_text_width(saten_text *text);
int saten_get_text_height(saten_text *text);
int saten_get_text_x(saten_text *text);
int saten_get_text_y(saten_text *text);
void saten_text_quit(void);
void saten_text_posw(saten_text *text, int x, int y);

void saten_text_modglyph(saten_text *text, SDL_Color *mod);
void saten_text_unmodglyph(saten_text *text);

#endif /* SATURN_ENGINE_CORE_TEXT */
