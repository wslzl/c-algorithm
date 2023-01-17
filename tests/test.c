#include <stdio.h>
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test1() {
    TEST_PASS();
}

void test2() {
    TEST_FAIL();
}

void test3() {
    TEST_ASSERT_EQUAL_HEX8(8, 8);
}

int main() {
    printf("Start TESTS\n");

    UNITY_BEGIN();

    RUN_TEST(test1);
//    RUN_TEST(test2);
    RUN_TEST(test3);

    return UNITY_END();
}
