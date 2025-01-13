#include "libds.h"

int main() {
    dlist_create_node();

    return 0;
}

// #include <stdio.h>
// #include "list.h"

// void list_print(t_node *list);

// int main() {
//     int count;
//     int *tmp;
//     t_node *list = NULL;
//     t_node *current = NULL;
//     t_node *new = NULL;

//     for (int i = 0; i < 5; i++) {
//         tmp = malloc(sizeof(int));
//         *tmp = i;  
//         list_append(&list, list_create(tmp));
//     }

//     tmp = malloc(sizeof(int));
//     *tmp = -1;
//     list_add_front(&list, list_create(tmp));

//     tmp = malloc(sizeof(int));
//     *tmp = -2;
//     list_add_front(&list, list_create(tmp));

//     list_print(list);

//     printf("\n Inserting 3000 After [2]...\n\n");
//     current = list_get(list, 2);
//     tmp = malloc(sizeof(int));
//     *tmp = 3000;
//     list_insert_after(current, list_create(tmp));

//     list_print(list);

//     printf("\nDestroying List...\n\n");

//     for (int i = 0; i < count; i++) {
//         list_remove(&list, list_get(list, 0), free);
//     }

//     printf("%p", list);
//     return 0;
// }

// void list_print(t_node *list) {
//     int count;
//     t_node *current;

//     count = list_size(list);
//     current = list;
//     for (int i = 0; i < count; i++) {
//         printf("List[%d] : %d\n", i, *(int *)(current->data));
//         current = current->next;
//     }
// }