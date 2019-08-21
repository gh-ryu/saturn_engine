#ifndef SATURN_ENGINE_VIDEO
#define SATURN_ENGINE_VIDEO

typedef struct _saten_window_info {
    int w;
    int h;
    int subw;
    int subh;
    int worig;
    int horig;
} saten_window_info;

void saten_video_init(void);
void saten_video_update(void);
void saten_voutreg(uint8_t mode, float scale);
void saten_voutr(uint8_t t, int *w, int *h, float *s);
void saten_video_mswitch(void);
void saten_video_wswitch(void);
void saten_video_colw(uint8_t r, uint8_t g, uint8_t b);
void saten_video_prepare_reset(void);
void saten_video_wpreset(void);
void saten_video_wpw(saten_sprite *spr, bool repeat);
void saten_video_wpdraw(void);
void saten_video_sconf(void);
void saten_video_lconf(void);
void saten_video_scldraw(void);
void saten_video_sclstrw(uint8_t);
void saten_video_quit(void);

#endif /* SATURN_ENGINE_VIDEO */
