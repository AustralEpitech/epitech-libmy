/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_compute_square_root
*/

#include <math.h>
#include <criterion/criterion.h>
#include "my.h"

Test(sqrt, two)
{
    int x = 2;

    cr_assert_eq(my_compute_square_root(x), 0);
}

Test(sqrt, zero)
{
    int x = 0;

    cr_assert_eq(my_compute_square_root(x), sqrt(x));
}

Test(sqrt, one)
{
    int x = 1;

    cr_assert_eq(my_compute_square_root(x), sqrt(x));
}

Test(sqrt, five)
{
    int x = 5;

    cr_assert_eq(my_compute_square_root(x), 0);
}
