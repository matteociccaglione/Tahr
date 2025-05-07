function(tool_program name)

    add_executable(trans trans.c)
    target_link_libraries(${name} PRIVATE binary)
    target_link_libraries(${name} PRIVATE m)
    target_include_directories(${name} PRIVATE ../src .)
    target_include_directories(${name} PRIVATE .)
#    add_test(NAME tool_${name} COMMAND test_${name})
#    set_tests_properties(test_${name} PROPERTIES TIMEOUT 60)
endfunction()

tool_program(trans trans.c)
