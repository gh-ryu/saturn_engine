// global variables
char *saten_base_path;
bool saten_break;
saten_pad *saten_pads;
SDL_Window *saten_window;
SDL_Renderer *saten_ren;
saten_fps_mngr saten_fps;
uint8_t saten_flags;
char* saten_errpath;

#define SATEN_ERRORS (1 << 7)
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

// error func
void saten_errhandler(int i);
void saten_printerr(int i, char *str);


// util func
char* saten_get_filepath(const char* fn);
