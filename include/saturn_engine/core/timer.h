#ifndef SATURN_ENGINE_CORE_TIMER
#define SATURN_ENGINE_CORE_TIMER

#define SATEN_TIMER_FR 0
#define SATEN_TIMER_MS 1

#define SATEN_TIMER_RUNNING  0
#define SATEN_TIMER_STOPPED  1
#define SATEN_TIMER_PAUSED   2
#define SATEN_TIMER_FINISHED 3

saten_timer* saten_timer_create(uint32_t n, uint8_t t);
void saten_timer_start(saten_timer *timer);
void saten_timer_pause(saten_timer *timer);
void saten_timer_continue(saten_timer *timer);
void saten_timer_stop(saten_timer *timer);
void saten_timer_reset(saten_timer *timer);
void saten_timer_destroy(saten_timer *timer);

void saten_timer_init(void);
void saten_timer_quit(void);
void saten_timer_update(void *item, int i, int num);
void saten_timer_destroy2(void *item, int i, int num);
void saten_timer_update_each(void);


#endif /* SATURN_ENGINE_CORE_TIMER */
