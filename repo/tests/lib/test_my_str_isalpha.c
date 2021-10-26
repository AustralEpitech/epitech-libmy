/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_str_isalpha
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_str_isalpha, alpha)
{
    cr_assert_eq(my_str_isalpha("helloworld"), 1);
}

Test(my_str_isalpha, not_alpha)
{
    cr_assert_eq(my_str_isalpha("Hello World!"), 0);
}
