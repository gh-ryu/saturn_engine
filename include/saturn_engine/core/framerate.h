#ifndef SATURN_ENGINE_CORE_FRAMERATE
#define SATURN_ENGINE_CORE_FRAMERATE

void saten_framerate_dixq_update(void);
void saten_framerate_dixq_wait(void);
void saten_framerate_update(void);
void saten_framerate_wait(void);

float saten_framerate_average(void);
void saten_framerate_set(int fps);

#endif /* SATURN_ENGINE_CORE_FRAMERATE */
