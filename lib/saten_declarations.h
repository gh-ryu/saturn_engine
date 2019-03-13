char *saten_base_path;
bool saten_break;
saten_pad *saten_pads;
SDL_Window *saten_window;
SDL_Renderer *saten_ren;
typedef void (*saten_fptr_run) (void);
int saten_init(const char *title, int screen_width, int screen_height);
int saten_run(saten_fptr_run);
