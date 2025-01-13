#include "list.h"

t_list_node *list_create_node(t_list_data data) {
	t_list_node *new_node;
	
	new_node = (t_list_node *)malloc(sizeof(t_list_node));
	if (!new_node) {
		return NULL;
	}
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

void list_append_node(t_list_node **head, t_list_node *new) {
	t_list_node *last;
	
    assert(head != NULL && new != NULL);
	if (!(*head)) {
		*head = new;
		return;
	}
	last = list_get_last_node(*head);
	last->next = new;
}

void list_prepend_node(t_list_node **head, t_list_node *new) {
    assert(head != NULL && new != NULL);
	new->next = *head;
	*head = new;
}

t_list_node *list_get_last_node(t_list_node *head) {
    t_list_node *last;

	if (!head) {
		return NULL;
	}
    last = head;
	while (last->next) {
		last = last->next;
	}
	return last;
}

t_list_node *list_get_node_at(t_list_node *head, size_t pos) {
	t_list_node *node;

	if (pos < 0) {
		return NULL;
	}
	node = head;
	while (node != NULL && pos--) {
		node = node->next;
	}
	return node;
}
