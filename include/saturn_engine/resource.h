#ifndef SATURN_ENGINE_RESOURCE
#define SATURN_ENGINE_RESOURCE

void saten_resource_load(const char *str);
void* saten_resource_fetch(int id);
void saten_resource_init(void);
void saten_resource_quit(void);

saten_resource* saten_resource_access(int id);
void saten_resource_loading(int id);
void saten_resource_free(int id);
void saten_resource_free_all(void);

void saten_resource_sfx_push(void);

//mrb_value saten_mrb_resource_get_files(mrb_state *mrb, mrb_value self);

#endif /* SATURN_ENGINE_RESOURCE */
