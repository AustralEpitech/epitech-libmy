/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strcmp
*/

#include <string.h>
#include <criterion/criterion.h>
#include "my.h"

Test(strcmp, hello_world)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World!";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}

Test(strcmp, not_eq)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello WOrld!";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}

Test(strcmp, sec_empty)
{
    char s1[] = "Hello World!";
    char s2[] = "";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}

Test(strcmp, first_empty)
{
    char s1[] = "";
    char s2[] = "Hello World!";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}

Test(strcmp, both_empty)
{
    char s1[] = "";
    char s2[] = "";

    cr_assert_eq(my_strcmp(s1, s2), strcmp(s1, s2));
}
