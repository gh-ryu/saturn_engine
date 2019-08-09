#ifndef SATURN_ENGINE_CORE_LIST
#define SATURN_ENGINE_CORE_LIST

void saten_list_init(saten_list **lptr, size_t s);
void saten_list_insert(saten_list *lptr, saten_litem *elemptr);
void saten_list_remove(saten_list *lptr, saten_litem *elemptr);
void saten_list_search(saten_list *lptr, saten_litem *curreptr,
        saten_litem **eptr, void *item);
void saten_list_traverse(saten_list *lptr, saten_fptr_list_action fptr);
void saten_list_loop(saten_list *lptr, saten_litem *eptr, int i,
        saten_fptr_list_action fptr);

#endif /* SATURN_ENGINE_CORE_LIST */
