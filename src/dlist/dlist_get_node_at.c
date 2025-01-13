#include "dlist.h"

t_dlist_node *dlist_get_node_at(t_dlist_node *head, int pos) {
	t_dlist_node *node;

	node = head;
	while (node != NULL && pos--) {
		node = node->next;
	}
	return node;
}
