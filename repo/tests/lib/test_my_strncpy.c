/*
** EPITECH PROJECT, 2021
** libmy\
** File description:
** test_my_strncpy
*/

#include <string.h>
#include "tests.h"

Test(strncpy, helloworld)
{
    char src[] = "Hello World!";
    char dest[sizeof src] = {0};
    char dest1[sizeof src] = {0};

    cr_assert_str_eq(my_strncpy(dest, src, 2), strncpy(dest1, src, 2));
}

Test(strncpy, empty_src)
{
    char src[] = "";
    char dest[sizeof src] = {0};
    char dest1[sizeof src] = {0};

    cr_assert_str_eq(my_strncpy(dest, src, 2), strncpy(dest1, src, 2));
}
