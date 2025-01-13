#include "dlist.h"

t_dlist_node *dlist_get_last(t_dlist_node *head) {
    t_dlist_node *last;

	if (!head) {
		return NULL;
	}
    last = head;
	while (last->next) {
		last = last->next;
	}
	return last;
}
