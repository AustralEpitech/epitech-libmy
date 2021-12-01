/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strdup
*/

#include <string.h>
#include <stdlib.h>
#include "tests.h"

Test(strdup, hello_world)
{
    char s[] = "Hello World!";
    char *result = my_strdup(s);
    char *expected = strdup(s);

    cr_assert_str_eq(result, expected);
    free(result);
    free(expected);
}

Test(strdup, empty)
{
    char s[] = "";
    char *result = my_strdup(s);
    char *expected = strdup(s);

    cr_assert_str_eq(result, expected);
    free(result);
    free(expected);
}
