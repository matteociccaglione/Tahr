#include <utils/list/list.h>
#include <stdlib.h>

inline void ll_init(linked_list *list) {
	list->first = list->last = NULL;
}

void ll_move(linked_list *from, linked_list *to) {
	to->first = from->first;
	from->first = NULL;
	to->last = from->last;
	from->last = NULL;
}

inline bool ll_empty(linked_list *list) {
	return (list->first ? false : true);
}

void ll_push(linked_list *list, void *elem) {
	ll_node *node;

	node = calloc(sizeof(ll_node), 1);
	node->elem = elem;

	if (ll_empty(list)) {
		list->first = list->last = node;
	}
	else if (list->first == list->last) {
		list->last = list->first->next = node;
		node->prev = list->first;
	}
	else {
		list->last->next = node;
		node->prev = list->last;
		list->last = node;
	}
}

ll_node *ll_push_and_return(linked_list *list, void *elem) {
	ll_node *node;

	node = calloc(sizeof(ll_node), 1);
	node->elem = elem;

	if (ll_empty(list)) {
		list->first = list->last = node;
	}
	else if (list->first == list->last) {
		list->last = list->first->next = node;
		node->prev = list->first;
	}
	else {
		list->last->next = node;
		node->prev = list->last;
		list->last = node;
	}

	return node;
}

void ll_push_first(linked_list *list, void *elem) {
	ll_node *node;

	node = calloc(sizeof(ll_node), 1);
	node->elem = elem;

	if (ll_empty(list)) {
		list->first = list->last = node;
	}
	else if (list->first == list->last) {
		list->first = list->last->prev = node;
		node->next = list->last;
	}
	else {
		list->first->prev = node;
		node->next = list->first;
		list->first = node;
	}
}

void *ll_pop(linked_list *list) {
	ll_node *node;
	void *elem;

	if (!ll_empty(list)) {
		if (list->first == list->last) {
			node = list->last;
			list->first = list->last = NULL;
		}
		else if (list->first->next == list->last) {
			node = list->last;
			list->first->next = NULL;
			list->last = list->first;
		}
		else {
			node = list->last;
			list->last->prev->next = NULL;
			list->last = list->last->prev;
		}
	}

	if (node) {
		elem = node->elem;
		free(node);
	}

	return elem;
}

void *ll_pop_first(linked_list *list) {
	ll_node *node;
	void *elem;

	if (!ll_empty(list)) {
		if (list->first == list->last) {
			node = list->first;
			list->first = list->last = NULL;
		}
		else if (list->first->next == list->last) {
			node = list->first;
			list->last->prev = NULL;
			list->first = list->last;
		}
		else {
			node = list->first;
			list->first->next->prev = NULL;
			list->first = list->first->next;
		}
	}

	if (node) {
		elem = node->elem;
		free(node);
	}

	return elem;
}

void *ll_free(linked_list *list){
	while(!ll_empty(list)){
		free(list->first->elem);
		ll_pop_first(list);
	}
	free(list);
}


