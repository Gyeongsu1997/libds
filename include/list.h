#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <assert.h>

typedef void *	t_list_data;

typedef struct s_list_node {
	t_list_data			data;
	struct s_list_node	*next;
}	t_list_node;

typedef struct s_list {
	size_t		size;
	t_list_node	*head;
}	t_list;

// list_construct.c
t_list *list_construct();
void list_clear(t_list *list);
void list_destroy(t_list *list);

// list_add.c
size_t list_append(t_list *list, t_list_data data);
size_t list_prepend(t_list *list, t_list_data data);
size_t list_insert_at(t_list *list, size_t pos, t_list_data data);

// list_get.c
t_list_data list_get_first(t_list *list);
t_list_data list_get_last(t_list *list);
t_list_data list_get_at(t_list *list, size_t pos);

// list_remove.c
t_list_data list_remove_first(t_list *list);
t_list_data list_remove_last(t_list *list);
t_list_data list_remove_at(t_list *list, size_t pos);

// list_node.c
t_list_node *list_create_node(t_list_data data);
void list_append_node(t_list_node **head, t_list_node *new);
void list_prepend_node(t_list_node **head, t_list_node *new);
t_list_node *list_get_last_node(t_list_node *head);
t_list_node *list_get_node_at(t_list_node *head, size_t pos);

// list_utils.c
size_t list_size(const t_list *list);
void list_reverse(t_list *list);
t_list *list_concat(t_list *list1, t_list *list2);
void list_iter(t_list *list, void (*f)(void *, size_t));

#endif // LIST_H