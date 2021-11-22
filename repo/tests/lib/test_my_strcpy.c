/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strcpy
*/

#include <string.h>
#include "tests.h"

Test(strcpy, hello_world)
{
    char src[] = "Hello World!";
    char dest[sizeof src];
    char dest1[sizeof src];

    cr_assert_str_eq(my_strcpy(dest, src), strcpy(dest1, src));
}

Test(strcpy, empty_src)
{
    char src[] = "";
    char dest[sizeof src];
    char dest1[sizeof src];

    cr_assert_str_eq(my_strcpy(dest, src), strcpy(dest1, src));
}
