#include "list_test.h"

static t_list *before_each(size_t size);
static void after_each(t_list *list);

void list_append_test() {
    size_t size_before = 5;
    t_list *list = before_each(size_before);

    int *data = (int *)malloc(sizeof(int));
    *data = 100;
    size_t size_after = list_append(list, data);

    assert(size_after == size_before + 1);
    assert(data == list_get_last(list));

    after_each(list);
}

void list_prepend_test() {
    size_t size_before = 5;
    t_list *list = before_each(size_before);

    int *data = (int *)malloc(sizeof(int));
    *data = 100;
    size_t size_after = list_prepend(list, data);

    assert(size_after == size_before + 1);
    assert(data == list_get_first(list));

    after_each(list);
}

void list_insert_at_test() {
    size_t size_before = 5;
    t_list *list = before_each(size_before);

    int *data = (int *)malloc(sizeof(int));
    *data = 100;
    size_t pos = 1;
    size_t size_after = list_insert_at(list, pos, data);

    assert(size_after == size_before + 1);
    assert(data == list_get_at(list, pos));

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
