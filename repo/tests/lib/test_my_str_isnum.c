/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_str_isnum
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_str_isnum, number)
{
    cr_assert_eq(my_str_isnum("0123456789"), 1);
}

Test(my_str_isnum, not_number)
{
    cr_assert_eq(my_str_isnum("0123456789h"), 0);
}
