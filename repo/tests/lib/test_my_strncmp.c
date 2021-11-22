/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strncmp
*/

#include <string.h>
#include "tests.h"

Test(strncmp, hello_world)
{
    char s1[] = "Hello WoRld!";
    char s2[] = "Hello World!";

    cr_assert_eq(my_strncmp(s1, s2, 8), strncmp(s1, s2, 8));
}

Test(strncmp, zero)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello WOrld!";

    cr_assert_eq(my_strncmp(s1, s2, 0), strncmp(s1, s2, 0));
}

Test(strncmp, sec_empty)
{
    char s1[] = "Hello World!";
    char s2[] = "";

    cr_assert_eq(my_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
}

Test(strncmp, first_empty)
{
    char s1[] = "";
    char s2[] = "Hello World!";

    cr_assert_eq(my_strncmp(s1, s2, 28), strncmp(s1, s2, 28));
}

Test(strncmp, both_empty)
{
    char s1[] = "";
    char s2[] = "";

    cr_assert_eq(my_strncmp(s1, s2, 0), strncmp(s1, s2, 0));
}
