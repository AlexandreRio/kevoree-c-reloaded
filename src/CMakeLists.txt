cmake_minimum_required(VERSION 2.8)
project(kevoree-c-model)

include_directories(.)
file(GLOB_RECURSE SRC *.c)

set(CMAKE_CXX_FLAGS "-std=c11 -m32 -g -O0 ${CMAKE_CXX_FLAGS}")
set(CMAKE_C_FLAGS "-std=c11 -m32 -g -D_BSD_SOURCE" ${CMAKE_C_FLAGS})

add_executable(
 main
 ${SRC}
)
