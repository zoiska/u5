cmake_minimum_required(VERSION 3.26)
project(u5 C)

set(CMAKE_C_STANDARD 11)

add_executable(u5 main.c)
target_link_libraries(u5 m)