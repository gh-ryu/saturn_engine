#ifndef SATURN_ENGINE_VIDEO
#define SATURN_ENGINE_VIDEO

void saten_video_init(void);
void saten_video_update(void);
void saten_voutreg(uint8_t mode, float scale);
void saten_voutr(uint8_t t, int *w, int *h, float *s);
void saten_video_mswitch(void);

#endif /* SATURN_ENGINE_VIDEO */
