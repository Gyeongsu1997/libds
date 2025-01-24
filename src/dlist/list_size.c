#include "dlist.h"

int dlist_size(t_dlist_node *head) {
    int size = 0;

    while (head) {
        head = head->next;
        size++;
    }
    return size;
}
