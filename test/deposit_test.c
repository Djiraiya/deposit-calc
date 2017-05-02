#include "../thirdparty/ctest.h"
#include "../src/deposit.h"

CTEST(dohod_less_31days_and_less_100000r, dohod)
{
    int a = 80000;
    int b = 15;
    int result = dohod(a, b);
    const int expected = 72000;
    ASSERT_EQUAL(expected, result);
}

CTEST(dohod_less_31days_and_more_100000r, dohod)
{
    int a = 150000;
    int b = 15;
    int result = dohod(a, b);
    const int expected = 135000;
    ASSERT_EQUAL(expected, result);
}

CTEST(dohod_more_30days_and_less_100000r, dohod)
{
    int a = 80000;
    int b = 35;
    int result = dohod(a, b);
    const int expected = 81600;
    ASSERT_EQUAL(expected, result);
}

CTEST(dohod_more_30days_and_more_100000r, dohod)
{
    int a = 150000;
    int b = 35;
    int result = dohod(a, b);
    const int expected = 154500;
    ASSERT_EQUAL(expected, result);
}

CTEST(dohod_more_120days_and_less_100000r, dohod)
{
    int a = 80000;
    int b = 125;
    int result = dohod(a, b);
    const int expected = 84800;
    ASSERT_EQUAL(expected, result);
}

CTEST(dohod_more_120days_and_more_100000r, dohod)
{
    int a = 150000;
    int b = 125;
    int result = dohod(a, b);
    const int expected = 162000;
    ASSERT_EQUAL(expected, result);
}

CTEST(dohod_more_240days_and_less_100000r, dohod)
{
    int a = 80000;
    int b = 245;
    int result = dohod(a, b);
    const int expected = 89600;
    ASSERT_EQUAL(expected, result);
}

CTEST(dohod_more_240days_and_more_100000r, dohod)
{
    int a = 150000;
    int b = 245;
    int result = dohod(a, b);
    const int expected = 172500;
    ASSERT_EQUAL(expected, result);
}
