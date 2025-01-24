#include "include/list.h"
#include <stdio.h>

int main() {
    int arr[] = {0, 1, 2, 3, 4};
    t_list *list = list_construct();

    for (int i = 0; i < 5; i++) {
        list_append(list, arr + i);
    }
    assert(list_size(list) == 6);
    return 0;
}