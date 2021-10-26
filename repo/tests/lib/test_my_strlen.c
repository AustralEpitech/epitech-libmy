/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strlen
*/

#include <string.h>
#include <criterion/criterion.h>
#include "my.h"

Test(strlen, hello_world)
{
    char s[] = "Hello World!";

    cr_assert_eq(my_strlen(s), strlen(s));
}

Test(strlen, empty)
{
    char s[] = "";

    cr_assert_eq(my_strlen(s), strlen(s));
}
