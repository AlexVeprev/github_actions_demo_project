add_executable(test_main test.cpp ${CMAKE_SOURCE_DIR}/src/impl.cpp)
target_include_directories(test_main PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test_main PRIVATE TBB::tbb)

add_test(NAME test_1 COMMAND ${CMAKE_CURRENT_BINARY_DIR}/test_main 1 1)
add_test(NAME test_5 COMMAND ${CMAKE_CURRENT_BINARY_DIR}/test_main 5 15)
add_test(NAME test_10 COMMAND ${CMAKE_CURRENT_BINARY_DIR}/test_main 10 55)
