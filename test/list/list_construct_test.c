#include "list_test.h"

static t_list *before_each(size_t size);
static void after_each(t_list *list);

void list_construct_test() {
    t_list *list;

    list = list_construct();
    assert(list->head->data == NULL);
    assert(list->head->next == NULL);
    assert(list->size == 0);

    after_each(list);
}

void list_clear_test() {
    t_list *list;

    list = before_each(5);
    list_clear(list);

    assert(list->head->next == NULL);
    assert(list->size == 0);

    after_each(list);
}

static t_list *before_each(size_t size) {
    int *data;
    t_list *list;

    data = (int *)malloc(sizeof(int) * size);
    list = list_construct();
    for (size_t i = 0; i < size; i++) {
        data[i] = i;
        list_append(list, data + i);
    }
    
    return list;
}

static void after_each(t_list *list) {
    list_destroy(list);
}
