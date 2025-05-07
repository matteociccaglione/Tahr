#pragma once
#include "stack.h"
#define MAX_GROW_LEVEL 300
#define is_queue_empty() head==NULL

typedef struct grow_queue{
        void *data;
        struct grow_queue *prev;
}queue_t;


extern queue_t *head;
extern void clear_queue();
extern void enqueue(void *data);
extern char* dequeue();
extern char *dump();
extern void* trans_sym(void *sym);
extern int grow();
