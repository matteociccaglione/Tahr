cmake_minimum_required(VERSION 3.20)
project("BFG" LANGUAGES C CXX VERSION "0.1")

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_subdirectory(src)
#add_subdirectory(examples)
add_subdirectory(the_generator)
add_subdirectory(binary)
# Run the tests
enable_testing()
add_subdirectory(test)
