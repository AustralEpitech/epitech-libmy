/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_is_prime
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_is_prime, zero)
{
    cr_assert_eq(my_is_prime(0), 0);
}

Test(my_is_prime, one)
{
    cr_assert_eq(my_is_prime(1), 0);
}

Test(my_is_prime, two)
{
    cr_assert_eq(my_is_prime(2), 1);
}

Test(my_is_prime, three)
{
    cr_assert_eq(my_is_prime(3), 1);
}

Test(my_is_prime, four)
{
    cr_assert_eq(my_is_prime(4), 0);
}
