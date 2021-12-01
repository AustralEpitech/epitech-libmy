/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strchr
*/

#include <string.h>
#include "tests.h"

Test(strchr, multiple_occurences)
{
    char str[] = "Hello World!";
    char c = 'l';

    cr_assert_eq(my_strchr(str, c), strchr(str, c));
}

Test(strchr, no_occurence)
{
    char str[] = "Hello World!";
    char c = 'z';

    cr_assert_eq(my_strchr(str, c), strchr(str, c));
}
