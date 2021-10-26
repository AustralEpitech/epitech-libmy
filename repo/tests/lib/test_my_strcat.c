/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strcat
*/

#include <string.h>
#include <criterion/criterion.h>
#include "my.h"

Test(strcat, hello_world)
{
    char dest[20] = "Hello ";
    char dest1[20] = "Hello ";
    char src[] = "World!";

    cr_assert_str_eq(my_strcat(dest, src), strcat(dest1, src));
}

Test(strcat, sec_empty)
{
    char dest[20] = "Hello ";
    char dest1[20] = "Hello ";
    char src[] = "";

    cr_assert_str_eq(my_strcat(dest, src), strcat(dest1, src));
}

Test(strcat, first_empty)
{
    char dest[20] = "";
    char dest1[20] = "";
    char src[] = "World!";

    cr_assert_str_eq(my_strcat(dest, src), strcat(dest1, src));
}


Test(strcat, both_empty)
{
    char dest[20] = "";
    char dest1[20] = "";
    char src[] = "";

    cr_assert_str_eq(my_strcat(dest, src), strcat(dest1, src));
}
