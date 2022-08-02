cmake_minimum_required(VERSION 3.9)
project(Template)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

include(cmake/prepare_conan.cmake)


set(LIB_PROJECT_NAME hello_lib)
set(BIN_PROJECT_NAME hello_bin)
set(TEST_PROJECT_NAME hello_test)

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)