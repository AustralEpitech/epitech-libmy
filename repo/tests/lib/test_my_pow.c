/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_pow
*/

#include <math.h>
#include "tests.h"

Test(pow, two_two)
{
    int x = 2;
    int y = 2;

    cr_assert_eq(my_pow(x, y), pow(x, y));
}

Test(pow, zero_one)
{
    int x = 0;
    int y = 1;

    cr_assert_eq(my_pow(x, y), pow(x, y));
}

Test(pow, one_zero)
{
    int x = 1;
    int y = 0;

    cr_assert_eq(my_pow(x, y), pow(x, y));
}

Test(pow, ten_zero)
{
    int x = 10;
    int y = 0;

    cr_assert_eq(my_pow(x, y), pow(x, y));
}

Test(pow, ten_four)
{
    int x = 10;
    int y = 4;

    cr_assert_eq(my_pow(x, y), pow(x, y));
}
