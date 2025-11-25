#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#ifndef __STACK_H
#define __STACK_H

#define STACK_SIZE 256
typedef struct stack_entry{
        void *data;
        unsigned char valid;
}stack_entry_t;

typedef struct __stack{
        stack_entry_t* top;
}stack_t;

extern stack_entry_t the_stack[STACK_SIZE];

extern uint64_t the_sp;

extern void* pop();
extern int push(void *the_element);
extern void initialize_stack();
extern bool is_empty();


#endif
