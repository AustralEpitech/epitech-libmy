/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strcspn
*/

#include <string.h>
#include "tests.h"

Test(strcspn, multiple_occurences)
{
    char str[] = "Hello World!";
    char c[] = "l";

    cr_assert_eq(my_strcspn(str, c), strcspn(str, c));
}

Test(strcspn, no_occurence)
{
    char str[] = "Hello World!";
    char c[] = "z";

    cr_assert_eq(my_strcspn(str, c), strcspn(str, c));
}
