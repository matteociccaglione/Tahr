include(CMakePrintHelpers)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

# Add Flex and Bison commands
find_package(FLEX REQUIRED)
find_package(BISON REQUIRED)

set(PARSER_DIR ${CMAKE_CURRENT_BINARY_DIR})
set(PARSER_SRC_DIR parser)

set(FLEX_OUT_META "${PARSER_DIR}/bfg.yylex.c")
set(BISON_OUT "${PARSER_DIR}/bfg.tab.c")
# set(FLEX_OUT_LEX "${PARSER_DIR}/lexicon.yylex.c")
# Add Flex and Bison output files

flex_target(METAGRAMMAR_YYLEX "${PARSER_SRC_DIR}/bfg.l" "${FLEX_OUT_META}")
bison_target(METAGRAMMAR_TAB ${PARSER_SRC_DIR}/bfg.y "${BISON_OUT}"  COMPILE_FLAGS "-d")
# flex_target(LEXICON_YYLEX ${FORSON_SRC_DIR}/lexicon.lex "${FLEX_OUT_LEX}")

# Add Flex and Bison dependencies
add_flex_bison_dependency(METAGRAMMAR_YYLEX METAGRAMMAR_TAB)
#add_flex_bison_dependency(LEXICON_YYLEX METAGRAMMAR_TAB)
#add_custom_target(METAGRAMMAR_YYLEX DEPENDS ${FLEX_METAGRAMMAR_YYLEX_OUTPUTS})
#add_custom_target(METAGRAMMAR_TAB DEPENDS ${BISON_METAGRAMMAR_TAB_OUTPUTS})
#add_custom_target(LEXICON_YYLEX DEPENDS ${FLEX_LEXICON_YYLEX_OUTPUTS})
# Include directories for generated headers
#include_directories(${CMAKE_CURRENT_BINARY_DIR})

#[[
# Add object files
set(OBJECTS
        ${FLEX_METAGRAMMAR_YYLEX_OUTPUTS}
        ${BISON_METAGRAMMAR_TAB_OUTPUTS}
        ${FLEX_LEXICON_YYLEX_OUTPUTS}
        )
]]

set(bfg_srcs
        internal/util.c
        internal/n_symbols.c
        internal/gen_code.c
        internal/attributes.c
        internal/rulefunc.c
        internal/rules.c
        internal/debug/debug.c
        internal/ag_utils.c
        parser/parser.c
        internal/gen_parse.c
        "${BISON_METAGRAMMAR_TAB_OUTPUTS}"
        "${FLEX_METAGRAMMAR_YYLEX_OUTPUTS}"
        "${FLEX_LEXICON_YYLEX_OUTPUTS}"
)
include_directories(${PARSER_DIR})

add_library(bfg STATIC ${bfg_srcs})
target_include_directories(bfg PRIVATE .)
target_link_libraries(bfg PRIVATE Threads::Threads)
target_link_libraries(bfg PUBLIC ${CURSES_LIBRARIES})
target_link_libraries(bfg PRIVATE m)


#[[
# Add executable target
add_executable(forson ${SOURCES})
]]

# Add compile flags


#[[# Add object libraries
add_library(forson-objs OBJECT ${OBJECTS})

# Link object libraries to the executable
target_link_libraries(forson forson-objs)]]
