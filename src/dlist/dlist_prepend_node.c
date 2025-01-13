#include "dlist.h"

void dlist_prepend_node(t_dlist_node **head, t_dlist_node *new) {
	if (!head || !new) {
		return;
	}
	new->next = *head;
    (*head)->prev = new;
	*head = new;
}
