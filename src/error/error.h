#pragma once

#include <stdint.h>
#include <stdio.h>
#ifndef __ERROR_H
#define __ERROR_H

uint64_t the_error;

typedef unsigned char error_t;

error_t ERROR = 0x0;
error_t SUCCESS = 0x1;

//Useful functions

#define set_last_error(the_code) do { \
        the_error = the_code; \
}while(0);



//ERROR CODES

//STACK
#define STACK_EMPTY_ERROR 0
#define STACK_FULL_ERROR 1
#define STACK_CORRUPTED_ERROR 2
#endif
