#!/bin/bash
cp src/internal/bitmap.h src/internal/arch.h src/internal/ruledef.h src/internal/limit.h src/internal/replace_to.c src/internal/rule_template.c src/internal/ag_parser.c src/internal/ag_parser.h src/internal/ag_utils.c src/internal/ag_utils.h src/internal/grow.c src/internal/grow.h  src/internal/rulefunc.c src/internal/stack.c src/internal/stack.h src/internal/util.c src/internal/util.h src/internal/output_files

cmake -D CMAKE_EXPORT_COMPILE_COMMANDS=ON -S . -B build
cmake --build build
