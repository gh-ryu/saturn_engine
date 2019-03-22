void saten_list_init(saten_list **lptr, size_t s)
{
    if (*lptr != NULL)
        saten_errhandler(13);
    *lptr = (saten_list*) malloc(sizeof(saten_list));
    if (*lptr == NULL)
        saten_errhandler(7);
    memset(*lptr, 0, sizeof(saten_list));
    (*lptr)->size = s;
}

void saten_list_insert(saten_list *lptr, saten_litem *elemptr)
{
    if (lptr->num == 0) {
        // list is empty
        lptr->head = elemptr;
    } else if (lptr->num == 1) {
        // list has exactly 1 element
        elemptr->prev = lptr->head;
        lptr->tail = elemptr;
        lptr->head->next = elemptr;
    } else {
        // list as 2+ elements so head and tail exist
        elemptr->prev = lptr->tail;
        lptr->tail->next = elemptr;
        lptr->tail = elemptr;
    }
    lptr->num++;
}

void saten_list_search(saten_list *lptr, saten_litem *curreptr,
        saten_litem **eptr, void *item)
{
    if (curreptr == NULL)
        curreptr = lptr->head;

    if (curreptr->current == item) {
        *eptr = curreptr;
    } else if (curreptr == lptr->tail) {
        // quit;
    } else {
        saten_list_search(lptr, curreptr->next, eptr, item);
    }
}

void saten_list_remove(saten_list *lptr, saten_litem *elemptr)
{
    if (lptr->head == elemptr) {
        // remove head, set next element or tail head
        if(lptr->num == 1) {
            // only head exists, so clear list
            free(elemptr);
            lptr->head = NULL;
        } else if (lptr->num == 2) {
            // there's only head and tail. set tail to head
            free(elemptr);
            lptr->head = lptr->tail;
            lptr->tail = NULL;
            lptr->head->prev = NULL;
        } else {
            // set next element to new head
            lptr->head = lptr->head->next;
            lptr->head->prev = NULL;
            free(elemptr);
        }
    } else if (lptr->tail == elemptr) {
        // remove tail
        lptr->tail = lptr->tail->prev;
        lptr->tail->next = NULL;
        free(elemptr);
    } else {
        // remove element somewhere in the middle
        // cast pointer
        saten_litem* prev = elemptr->prev;
        saten_litem* next = elemptr->next;
        prev->next = elemptr->next;
        next->prev = elemptr->prev;
        free(elemptr);
    }
    lptr->num--;
}
