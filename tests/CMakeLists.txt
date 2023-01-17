include(CTest)

set(TEST_NAME list)
set(TEST_EXECUTABLE_NAME test_${TEST_NAME})

enable_testing()

add_executable(${TEST_EXECUTABLE_NAME} test.c)

target_include_directories(${TEST_EXECUTABLE_NAME} PUBLIC ${INCLUDE_PATHS})
target_link_libraries(${TEST_EXECUTABLE_NAME} unity)

add_test(NAME ${TEST_NAME} COMMAND ${TEST_EXECUTABLE_NAME})
