#ifndef DLIST_H
#define DLIST_H

#include <stdlib.h>
#include <assert.h>

typedef struct s_dlist_node {
	void *data;
    struct s_dlist_node *prev;
	struct s_dlist_node *next;
} t_dlist_node;

typedef struct s_dlist {
	size_t size;
	t_dlist_node *head;
	t_dlist_node *tail;
} t_dlist;

t_dlist *dlist_construct();

t_dlist_node *dlist_create_node(void *data);
void dlist_append_node(t_dlist_node **head, t_dlist_node *new);
void dlist_destroy_node(t_dlist_node *node, void (*del)(void *));
t_dlist_node *dlist_get_node_at(t_dlist_node *head, int pos);
void dlist_remove_node(t_dlist_node **head, t_dlist_node *remove);
t_dlist_node *dlist_get_last(t_dlist_node *head);
void dlist_prepend_node(t_dlist_node **head, t_dlist_node *new);

#endif // DLIST_H