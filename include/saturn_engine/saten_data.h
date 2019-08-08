#ifndef SATURN_ENGINE_DATA
#define SATURN_ENGINE_DATA

void saten_data_save_init(char *fp, char *symkey);
void saten_data_load_init(char *fp, char *symkey);
void saten_data_quit(void);
void saten_data_save_float(float f);
void saten_data_save_int(int i);
void saten_data_save_bool(bool b);
void saten_data_save_string(char *str);
void saten_data_load_float(float *f);
void saten_data_load_int(int *i);
void saten_data_load_bool(bool *b);
void saten_data_load_string(char **str);

#endif /* SATURN_ENGINE_DATA */
