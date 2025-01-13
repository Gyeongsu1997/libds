#include "dlist.h"

void dlist_destroy_node(t_dlist_node *node, void (*del)(void *)) {
	if (!node) {
		return;
	}
	if (del) {
		del(node->data);
	}
	free(node);
}
