/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_str_islower
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_str_islower, lower)
{
    cr_assert_eq(my_str_islower("helloworld"), 1);
}

Test(my_str_islower, not_lower)
{
    cr_assert_eq(my_str_islower("HelloWorld"), 0);
}
