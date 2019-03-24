// global variables
char *saten_base_path;
bool saten_break;
saten_pad *saten_pads;
uint8_t saten_pad_num;
SDL_Window *saten_window;
SDL_Renderer *saten_ren;
saten_fps_mngr saten_fps;
uint8_t saten_flags;
char* saten_errpath;
const uint8_t *saten_keystate;
int32_t *saten_keystate2;

saten_list* saten_list_layer;
saten_layer* saten_target_layer;
saten_layer* saten_layer0;

#define SATEN_ERRORS (1 << 7)
#define SATEN_INPUT (1 << 6)
#define SATEN_KEYCODES (1 << 5)
#define SATEN_PRINTERR saten_flag_check(SATEN_ERRORS, saten_flags)

// function pointers
typedef void (*saten_fptr_run)(void);
typedef void (*saten_fptr_list_action)(void*, int, int);

// public functions
int saten_init(const char *title, int screen_width, int screen_height,
        uint8_t flags);
int saten_run(saten_fptr_run);

// draw
void saten_draw_line(int x1, int y1, int x2, int y2, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_rect(int x, int y, int w, int h, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_rect_filled(int x, int y, int w, int h, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_point(int x, int y, uint8_t r, uint8_t g, uint8_t b,
        uint8_t a, SDL_BlendMode blendmode);
void saten_draw_circle(int x, int y, int rad, uint8_t r, uint8_t g, uint8_t b,
        uint8_t a, SDL_BlendMode blendmode);
void saten_draw_circle_filled(int x, int y, int rad, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_set_param(uint8_t r, uint8_t g, uint8_t b, uint8_t a,
        SDL_BlendMode blendmode);
void saten_draw_render_circle(int x, int y, int r, bool fill);

// sprite
void saten_destroy_sprite(saten_sprite *sprite);
void saten_draw_sprite(saten_sprite *sprite, int tile_id, int x, int y,
        double ang, bool stretch);
void saten_sprite_scale(saten_sprite *sprite, float scale);
saten_sprite* saten_load_sprite(char *filename);
void saten_set_texture(saten_sprite *sprite);
void saten_set_tiles(saten_sprite *sprite, int num_h, int num_v);
//void saten_copy_sprite(saten_sprite **sprite_out, saten_sprite *sprite_in);
//void saten_recolor_sprite(saten_sprite *sprite, uint8_t r, uint8_t g,
//        uint8_t b);
void saten_sprite_alphamod(saten_sprite *sprite, uint8_t alpha);
void saten_sprite_colormod(saten_sprite *sprite, uint8_t r, uint8_t g,
        uint8_t b);
void saten_sprite_blendmode(saten_sprite *sprite, SDL_BlendMode blendmode);

// layer
void saten_create_layer(saten_layer **lay, int width, int height);
void saten_destroy_layer(saten_layer *lay);
void saten_layer_set_clip_area(saten_layer *lay, int x, int y, int w, int h);
void saten_layer_reset_clip_area(saten_layer *lay);
void saten_combine_layers(void);
void saten_layer_blit(void *item, int i, int num);
void saten_set_target_layer(saten_layer *lay);
void saten_layer_clear(saten_layer *layer);
void saten_layer_clear2(void *item, int i, int num);
void saten_layer_clear_all(void);
void saten_layer_alphamod(saten_layer *layer, uint8_t alpha);
void saten_layer_colormod(saten_layer *layer, uint8_t r, uint8_t g,
        uint8_t b);
void saten_layer_blendmode(saten_layer *layer, SDL_BlendMode blendmode);

// getters and setters
void saten_set_fps(int fps);
void saten_set_stick_deadzone(int16_t dz, int i);
float saten_get_avg_fps(void);
float saten_get_left_stick_angle(int i);
float saten_get_right_stick_angle(int i);


// fps control functions
void saten_fps_control_update(void);
void saten_fps_control_wait(void);

// bitop functions
bool saten_flag_check(uint8_t mask, uint8_t flag);
void saten_flag_set(uint8_t mask, uint8_t *flag);
void saten_flag_unset(uint8_t mask, uint8_t *flag);

// input func
void saten_keyb_input_refresh(void);
void saten_pad_input_refresh(int i);
void saten_pad_input_refresh_controller(int i);
void saten_pad_input_refresh_joystick(int i);
void saten_keyb_input_update(bool b, uint8_t i);
void saten_pad_input_update(int i, bool b, int j);
void saten_pad_axis_update(int i, int16_t k, int j);
void saten_pad_stick_angle(int i);
void saten_pad_filter_deadzone(int i);
uint32_t saten_key(uint8_t i);
uint32_t saten_btn(uint8_t i, int j);
void saten_controller_add(int i);
void saten_controller_remove(int i);

// haptic
void saten_haptic_init(int i);
void saten_rumble_init(int i);
SDL_Haptic* saten_get_haptic(int i);
void saten_rumble(int i, float str, uint32_t l);
void saten_rumble_stop(int i);


// error func
void saten_errhandler(int i);
void saten_printerr(int i, char *str);

// list func
void saten_list_init(saten_list **lptr, size_t s);
void saten_list_insert(saten_list *lptr, saten_litem *elemptr);
void saten_list_remove(saten_list *lptr, saten_litem *elemptr);
void saten_list_search(saten_list *lptr, saten_litem *curreptr,
        saten_litem **eptr, void *item);
void saten_list_traverse(saten_list *lptr, saten_fptr_list_action fptr);
void saten_list_loop(saten_list *lptr, saten_litem *eptr, int i,
        saten_fptr_list_action fptr);

// util func
char* saten_get_filepath(const char* fn);
int square(int a);

