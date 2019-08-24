#ifndef INPUT
#define INPUT


/* PUBLIC */
void input_playerw(int id);
void input_init(void);
void input_save_all_mappings(void);

/* PRIVATE */
void input_load_mappings(char *fn, inputcntr *inp);
void input_save_mappings(char *fn, inputcntr *inp);
#endif /* INPUT */
