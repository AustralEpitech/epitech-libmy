/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strstr
*/

#include <string.h>
#include <criterion/criterion.h>
#include "my.h"

Test(strstr, hello_world_hello)
{
    char haystack[] = "Hello World!";
    char needle[] = "Hello";

    cr_assert_str_eq(my_strstr(haystack, needle), strstr(haystack, needle));
}

Test(strstr, hello_world_wello)
{
    char haystack[] = "Hello World!";
    char needle[] = "Wello";

    cr_assert_eq(my_strstr(haystack, needle), strstr(haystack, needle));
}

Test(strstr, hello_world_empty)
{
    char haystack[] = "Hello World!";
    char needle[] = "";

    cr_assert_str_eq(my_strstr(haystack, needle), strstr(haystack, needle));
}

Test(strstr, empty_hello)
{
    char haystack[] = "";
    char needle[] = "Hello";

    cr_assert_eq(my_strstr(haystack, needle), strstr(haystack, needle));
}

Test(strstr, empty_empty)
{
    char haystack[] = "";
    char needle[] = "";

    cr_assert_str_eq(my_strstr(haystack, needle), strstr(haystack, needle));
}
