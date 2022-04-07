cmake_minimum_required(VERSION 3.1)

project(intsum VERSION 0.2 LANGUAGES CXX)

add_executable(intsum src/main.cpp src/impl.cpp)
target_include_directories(intsum PRIVATE include)

find_package(TBB 2021 REQUIRED)
message(STATUS "oneTBB found: ${TBB_VERSION}")
target_link_libraries(intsum PRIVATE TBB::tbb)

enable_testing()
add_subdirectory(test)

include(GNUInstallDirs)
install(TARGETS intsum
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

set(CPACK_PACKAGE_NAME "${PROJECT_NAME}")
set(CPACK_PACKAGE_VERSION "${PROJECT_VERSION}")
set(CPACK_PACKAGE_CONTACT "aveprev27@gmail.com")

include(CPack)
