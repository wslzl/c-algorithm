cmake_minimum_required(VERSION 3.24)

set(PROJECT_NAME c_algorithm)
project(${PROJECT_NAME} C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(data_structure)

add_subdirectory(tests)
add_subdirectory(third_party/unity)
