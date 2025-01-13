#include "dlist.h"

t_dlist_node *dlist_create_node(void *data) {
    t_dlist_node *node;
	
	node = (t_dlist_node *)malloc(sizeof(t_dlist_node));
	if (!node) {
		return NULL;
	}
	node->data = data;
    node->prev = NULL;
	node->next = NULL;
	return node;
}
