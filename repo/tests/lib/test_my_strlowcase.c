/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strlowcase
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strlowcase, hello_world)
{
    char str[] = "Hello World!";

    cr_assert_str_eq(my_strlowcase(str), "hello world!");
}

Test(my_strlowcase, empty)
{
    char str[] = "";

    cr_assert_str_eq(my_strlowcase(str), "");
}
