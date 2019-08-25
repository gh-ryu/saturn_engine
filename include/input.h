#ifndef INPUT
#define INPUT

enum inputs { accept, cancel, pause, mainshot, subshot, up, down, right,
    left, switchwpn, slow };

/* PUBLIC */
void input_playerw(int id);
void input_init(void);
void input_save_all_mappings(void);
uint32_t input(enum inputs i);

/* PRIVATE */
void input_load_mappings(char *fn, inputcntr *inp);
void input_save_mappings(char *fn, inputcntr *inp);
//void input_set(inputcntr **btn, inputcntr **key);
void input_set(uint8_t **btn, uint8_t **key);
#endif /* INPUT */
