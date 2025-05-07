#!/bin/bash

cmake -Wconflicts-sr -D CMAKE_EXPORT_COMPILE_COMMANDS=ON -S . -B build
cmake --build build
