#include "list.h"

t_list_data list_get_first(t_list *list) {
    t_list_node *first;

	assert(list != NULL);
	first = list->head->next;
	return first->data; // error if first == NULL
}

t_list_data list_get_last(t_list *list) {
    t_list_node *last;

	assert(list != NULL);
	last = list_get_last_node(list->head->next);
	return last->data; // error if last == NULL
}

t_list_data list_get_at(t_list *list, size_t pos) {
	t_list_node *node;

	assert(list != NULL);
	node = list_get_node_at(list->head->next, pos);
	return node->data; // error if node == NULL
}
