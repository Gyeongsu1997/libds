#include "list.h"

t_list_data list_remove_first(t_list *list) {
    return list_remove_at(list, 0);
}

t_list_data list_remove_last(t_list *list) {
    return list_remove_at(list, list->size - 1);
}

t_list_data list_remove_at(t_list *list, size_t pos) {
    t_list_node *prev;
    t_list_node *remove;
    t_list_data data;

    prev = list_get_node_at(list->head, pos);
    remove = prev->next; // error if pos < 0
    prev->next = remove->next; // error if pos >= list size

    data = remove->data;
    free(remove);
    --(list->size);
    return data;
}
