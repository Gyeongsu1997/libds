#include "dlist.h"

int list_size(t_dlist_node *head) {
    int size = 0;

    while (head) {
        head = head->next;
        size++;
    }
    return size;
}
