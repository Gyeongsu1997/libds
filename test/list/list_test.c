// #include "list.h"
// #include <stdio.h>

// void print_all(void *data, size_t index);

// int main() {
//     int *arr = (int *)malloc(sizeof(int) * 10);
//     t_list *list = list_construct();

//     printf("\ninitialize...\n");
//     for (int i = 0; i < 10; i++) {
//         arr[i] = i + 1;
//         list_append(list, arr + i);
//     }

//     list_iter(list, print_all);
//     printf("\nsize: %ld\n", list_size(list));

//     printf("\nprepend 100...\n");
//     int *data = (int *)malloc(sizeof(int));
//     *data = 100;
//     list_prepend(list, data);

//     list_iter(list, print_all);
//     printf("\nsize: %ld\n", list_size(list));

//     printf("\nclear...\n");
//     list_clear(list);

//     list_iter(list, print_all);
//     printf("\nsize: %ld\n", list_size(list));

//     printf("\ndestroy...\n");
//     list_destroy(list);

//     return 0;
// }

// void print_all(void *data, size_t index) {
//     printf("%ld -> %d\n", index, *(int *)data);
// }
