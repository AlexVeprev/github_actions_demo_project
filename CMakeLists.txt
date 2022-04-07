cmake_minimum_required(VERSION 3.1)

project(intsum VERSION 0.1 LANGUAGES CXX)

add_executable(intsum src/main.cpp src/impl.cpp)
target_include_directories(intsum PRIVATE include)

enable_testing()
add_subdirectory(test)
