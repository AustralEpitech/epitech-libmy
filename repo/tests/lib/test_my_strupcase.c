/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strupcase
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strupcase, hello_world)
{
    char str[] = "Hello World!";

    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD!");
}

Test(my_strupcase, empty)
{
    char str[] = "";

    cr_assert_str_eq(my_strupcase(str), "");
}
