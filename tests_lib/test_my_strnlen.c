/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strnlen
*/

#include <string.h>
#include "tests.h"

Test(strnlen, hello_world)
{
    char s[] = "Hello World!";

    cr_assert_eq(my_strnlen(s, 30), strnlen(s, 30));
}

Test(strnlen, empty)
{
    char s[] = "";

    cr_assert_eq(my_strnlen(s, 0), strnlen(s, 0));
}
