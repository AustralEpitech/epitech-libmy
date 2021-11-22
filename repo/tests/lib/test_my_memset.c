/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_memset
*/

#include <string.h>
#include "tests.h"

Test(memset, _20)
{
    char str[] = "Hello World!";
    char expected[] = "Hello World!";

    my_memset(str, 'f', sizeof str - 1);
    memset(expected, 'f', sizeof str - 1);
    cr_assert_str_eq(str, expected);
}

Test(memset, empty_str)
{
    char str[] = "";
    char expected[] = "";

    my_memset(str, 'f', sizeof str - 1);
    memset(expected, 'f', sizeof str - 1);
    cr_assert_str_eq(str, expected);
}
