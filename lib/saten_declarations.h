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
uint32_t *saten_keystate2;

#define SATEN_ERRORS (1 << 7)
#define SATEN_INPUT (1 << 6)
#define SATEN_KEYCODES (1 << 5)
#define SATEN_PRINTERR saten_flag_check(SATEN_ERRORS, saten_flags)

// function pointers
typedef void (*saten_fptr_run) (void);

// public functions
int saten_init(const char *title, int screen_width, int screen_height,
        uint8_t flags);
int saten_run(saten_fptr_run);

// getters and setters
void saten_set_fps(int fps);
float saten_get_avg_fps(void);

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
void saten_keyb_input_update(bool b, uint8_t i);
void saten_pad_input_update(int i, bool b, int j);
uint32_t saten_key(uint8_t i);
uint32_t saten_btn(uint8_t i, int j);


// error func
void saten_errhandler(int i);
void saten_printerr(int i, char *str);


// util func
char* saten_get_filepath(const char* fn);

