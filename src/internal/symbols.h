#pragma once

#include <stdint.h>
#ifndef __SYMBOLS_H
#define __SYMBOLS_H
typedef uint32_t literal_t; //literal_t is an index in a global symbol table

typedef struct proto_variable{
        uint32_t id;
        literal_t lt;
}proto_variable_t;
proto_variable_t *proto_variables;
uint64_t n_pv;
typedef struct meta_variable{
        uint32_t id;
        literal_t lt;
        unsigned char *values; //This is a bitmap of size n_pv! If the i-th entry of the bitmap is set to 0x1, then the corresponding proto_variable in proto_variables is a legal value;
        uint64_t value; //if value_set is 0x1 this is the index of the value given to this instance of meta_variable 
        unsigned char value_set; 
}meta_variable_t;

typedef struct rule{
        uint32_t id;
        //hyper_variable_t *rhs;
        //hyper_variable_t *lhs;
        //companion_rule_t *cr;
} rule_t;
typedef struct hyper_variable{
        uint32_t id;
        literal_t lt;
        meta_variable_t **metavariables;
        rule_t **rules;
}hyper_variable_t;

typedef struct global_symbol_table{
        char **names;
        uint64_t len;
}gst_t;

gst_t gst;

#endif 
