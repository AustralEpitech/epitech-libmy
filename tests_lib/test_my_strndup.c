/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strndup
*/

#include <string.h>
#include <stdlib.h>
#include "tests.h"

Test(strndup, hello_world)
{
    char s[] = "Hello World!";
    char *result = my_strndup(s, sizeof s);
    char *expected = strndup(s, sizeof s);

    cr_assert_str_eq(result, expected);
    free(result);
    free(expected);
}

Test(strndup, empty)
{
    char s[] = "";
    char *result = my_strndup(s, 0);
    char *expected = strndup(s, 0);

    cr_assert_str_eq(result, expected);
    free(result);
    free(expected);
}
