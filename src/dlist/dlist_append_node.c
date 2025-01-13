#include "dlist.h"

void dlist_append_node(t_dlist_node **head, t_dlist_node *new) {
	t_dlist_node *last;
	
	if (!head || !new) {
		return;
	}	
	if (!(*head)) {
		*head = new;
		return;
	}
	last = dlist_get_last(*head);
	last->next = new;
    new->prev = last;
}