#include "list.h"

t_list *list_construct() {
    t_list *list;
    t_list_node *head;
	
	list = (t_list *)malloc(sizeof(t_list));
	if (!list) {
		return NULL;
	}
    head = (t_list_node *)malloc(sizeof(t_list_node));
    if (!head) {
        free(list);
        return NULL;
    }
    head->data = NULL;
    head->next = NULL;
    list->head = head;
    list->size = 0;
	return list;
}

void list_clear(t_list *list) {
	t_list_node *current;
	t_list_node *next;

    assert(list != NULL);
	current = list->head->next;
	while (current) {
		next = current->next;
        free(current);
		current = next;
	}
	list->head->next = NULL;
	list->size = 0;
}

void list_destroy(t_list *list) {
	if (list->size > 0) {
		list_clear(list);
	}
	free(list->head);
    free(list);
}
