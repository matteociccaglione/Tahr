#pragma once

#include <stdbool.h>

typedef struct ll_node {
	struct ll_node *next;
	struct ll_node *prev;
	void *elem;
} ll_node;

typedef struct {
	ll_node *first;
	ll_node *last;
} linked_list;

extern void ll_init(linked_list *list);

extern void ll_move(linked_list *from, linked_list *to);
extern bool ll_empty(linked_list *list);

extern void ll_push(linked_list *list, void *elem);
extern void ll_push_first(linked_list *list, void *elem);
extern ll_node *ll_push_and_return(linked_list *list, void *elem);

extern void *ll_pop(linked_list *list);
extern void *ll_pop_first(linked_list *list);

extern void *ll_free(linked_list *list);


