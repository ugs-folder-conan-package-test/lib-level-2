cmake_minimum_required(VERSION 3.19)
project(lib_level_2 CXX)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

set(CMAKE_CXX_STANDARD 20)

find_package(lib-level-1 REQUIRED)

add_library(lib-2 INTERFACE)
target_include_directories(lib-2 INTERFACE cpp)
target_include_directories(lib-2 INTERFACE ${lib-level-1_INCLUDE_DIRS})
