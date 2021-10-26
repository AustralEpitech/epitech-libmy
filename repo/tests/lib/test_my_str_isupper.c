/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_str_isupper
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_str_isupper, upper)
{
    cr_assert_eq(my_str_isupper("GHSLGKRBGF"), 1);
}

Test(my_str_isupper, not_upper)
{
    cr_assert_eq(my_str_isupper("HVBJGBR VBJSL"), 0);
}
