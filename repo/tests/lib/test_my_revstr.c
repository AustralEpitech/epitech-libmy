/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_revstr, hello)
{
    char str[] = "hello";

    cr_assert_str_eq(my_revstr(str), "olleh");
}

Test(my_revstr, hello_world)
{
    char str[] = "Hello World!";

    cr_assert_str_eq(my_revstr(str), "!dlroW olleH");
}

Test(my_revstr, empty)
{
    char str[] = "";

    cr_assert_str_eq(my_revstr(str), "");
}
