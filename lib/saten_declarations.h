// global variables
char *saten_base_path;
bool saten_break;
saten_pad *saten_pads;
SDL_Window *saten_window;
SDL_Renderer *saten_ren;
saten_fps_mngr saten_fps;
int saten_fcnt; // frame count

// function pointers
typedef void (*saten_fptr_run) (void);

// public functions
int saten_init(const char *title, int screen_width, int screen_height);
int saten_run(saten_fptr_run);

// getters and setters
void saten_set_fps(int fps);
float saten_get_avg_fps(void);

// fps control functions
void saten_fps_control_update(void);
void saten_fps_control_wait(void);

