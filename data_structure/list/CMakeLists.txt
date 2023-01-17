cmake_minimum_required(VERSION 3.24)

set(PROJECT_NAME linked_list)

project(${PROJECT_NAME} C)

set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME} main.c list.c list.h)