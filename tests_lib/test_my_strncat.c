/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strncat
*/

#include <string.h>
#include "tests.h"

Test(strncat, hello_world)
{
    char dest[20] = "Hello ";
    char dest1[20] = "Hello ";
    char src[] = "World!";

    cr_assert_str_eq(my_strncat(dest, src, 2), strncat(dest1, src, 2));
}

Test(strncat, sec_empty)
{
    char dest[20] = "Hello ";
    char dest1[20] = "Hello ";
    char src[] = "";

    cr_assert_str_eq(my_strncat(dest, src, 0), strncat(dest1, src, 0));
}

Test(strncat, first_empty)
{
    char dest[20] = "";
    char dest1[20] = "";
    char src[] = "World!";

    cr_assert_str_eq(my_strncat(dest, src, 5), strncat(dest1, src, 5));
}


Test(strncat, both_empty)
{
    char dest[20] = "";
    char dest1[20] = "";
    char src[] = "";

    cr_assert_str_eq(my_strncat(dest, src, 0), strncat(dest1, src, 0));
}
