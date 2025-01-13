#include "list.h"

size_t list_append(t_list *list, t_list_data data) {
    t_list_node *new_node;

    new_node = list_create_node(data);
    if (!new_node) {
        return 0;
    }
    list_append_node(&(list->head->next), new_node);
    return ++(list->size);
}

size_t list_prepend(t_list *list, t_list_data data) {
    t_list_node *new_node;

    new_node = list_create_node(data);
    if (!new_node) {
        return 0;
    }
    list_prepend_node(&(list->head->next), new_node);
    return ++(list->size);
}

size_t list_insert_at(t_list *list, size_t pos, t_list_data data) {
    t_list_node *prev;
    t_list_node *new_node;

    new_node = list_create_node(data);
    if (!new_node) {
        return 0;
    }
    prev = list_get_node_at(list->head, pos);
    new_node->next = prev->next; // error if pos < 0 or pos > list size
    prev->next = new_node;
    return ++(list->size);   
}
