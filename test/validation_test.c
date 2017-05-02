#include "../thirdparty/ctest.h"
#include "../src/deposit.h"

CTEST(check1, validationtest1)
{
    int c = 9999;
    int d = 1;
    int result = check(c, d);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check2, validationtest2)
{
    int c = 15000;
    int d = -5;
    int result = check(c, d);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check3, validationtest3)
{
    int c = 15000;
    int d = 366;
    int result = check(c, d);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check4, validationtest4)
{
    int c = 999999;
    int d = 364;
    int result = check(c, d);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
