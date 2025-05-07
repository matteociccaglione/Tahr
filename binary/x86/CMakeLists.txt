cmake_minimum_required(VERSION 3.20)
project("Binary Generator" LANGUAGES C CXX VERSION "0.1")

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_subdirectory(transpiler)
