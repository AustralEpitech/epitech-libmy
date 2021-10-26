/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_compute_power_rec
*/

#include <math.h>
#include <criterion/criterion.h>
#include "my.h"

Test(pow, two_two)
{
    int x = 2;
    int y = 2;

    cr_assert_eq(my_compute_power_rec(x, y), pow(x, y));
}

Test(pow, zero_one)
{
    int x = 0;
    int y = 1;

    cr_assert_eq(my_compute_power_rec(x, y), pow(x, y));
}

Test(pow, one_zero)
{
    int x = 1;
    int y = 0;

    cr_assert_eq(my_compute_power_rec(x, y), pow(x, y));
}

Test(pow, ten_zero)
{
    int x = 10;
    int y = 0;

    cr_assert_eq(my_compute_power_rec(x, y), pow(x, y));
}

Test(pow, ten_four)
{
    int x = 10;
    int y = 4;

    cr_assert_eq(my_compute_power_rec(x, y), pow(x, y));
}
