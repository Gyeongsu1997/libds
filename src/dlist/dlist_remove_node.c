#include "dlist.h"

void dlist_remove_node(t_dlist_node **head, t_dlist_node *remove) {
	if (!head || !remove) {
		return;
	}
	if (*head == remove) {
		*head = remove->next;
        if (*head) {
            (*head)->prev = NULL;
        }
        remove->prev = NULL;
        remove->next = NULL;
		return;
    }
    if (!(remove->prev)) {
        remove->prev->next = remove->next;
    }
    if (!(remove->next)) {
        remove->next->prev = remove->prev;
    }
    remove->prev = NULL;
    remove->next = NULL;
}