#ifndef SATURN_ENGINE_BGM
#define SATURN_ENGINE_BGM

void saten_bgmplay(saten_music *music);
void saten_bgmposw(double npos);
void saten_bgmlposw(double npos);
void saten_bgmloopsw(int n);
void saten_bgmfadein(int ms);
void saten_bgmfadeout(int ms);

void saten_bgmvolw(int v);
int saten_bgmvolr(void);

void saten_bgmrepeat(void);
void saten_bgmnorepeat(void);

void saten_bgmloop(void);
void saten_bgmstart(void);

void saten_bgmpause(void);
void saten_bgmstop(void);

#endif /* SATURN_ENGINE_BGM */
