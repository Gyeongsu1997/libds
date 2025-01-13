#include "dlist.h"

t_dlist *dlist_construct() {
    t_dlist *list;
	
	list = (t_dlist *)malloc(sizeof(t_dlist));
	if (!list) {
		return NULL;
	}
    list->head = (t_dlist_node *)malloc(sizeof(t_dlist_node));
    if (!(list->head)) {
        free(list);
        return NULL;
    }
    list->head->data = NULL;
    list->head->next = NULL;
    list->size = 0;
	return list;
}
