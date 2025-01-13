#include "list.h"

size_t list_size(const t_list *list) {
    assert(list != NULL);
	return list->size;
}

void list_reverse(t_list *list) {
    t_list_node *prev;
    t_list_node *curr;
    t_list_node *next;

    curr = NULL;
    next = list->head->next;
    while (!next) {
        prev = curr;
        curr = next;
        next = next->next;
        curr->next = prev;
    }
    list->head->next = curr;
}

t_list *list_concat(t_list *list1, t_list *list2) {
    t_list *new_list;
    t_list_node *node;
    
    new_list = list_construct();
    if (!new_list) {
        return NULL;
    }
    node = list1->head->next;
    while (node) { 
        if (!list_append(new_list, node->data)) {
            list_destroy(new_list);
            return NULL;
        }
        node = node->next;
    }
    node = list2->head->next;
    while (node) {
        if (!list_append(new_list, node->data)) {
            list_destroy(new_list);
            return NULL;
        }
        node = node->next;
    }
    return new_list;
}

void list_iter(t_list *list, void (*f)(void *, size_t)) {
    t_list_node *node;
    size_t index;

    assert(list != NULL && f != NULL);
    node = list->head->next;
    index = 0;
	while (node) {
		f(node->data, index++);
		node = node->next;
	}
}
