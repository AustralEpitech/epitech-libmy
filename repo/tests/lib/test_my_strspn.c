/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strspn
*/

#include <string.h>
#include "tests.h"

Test(strspn, multiple_occurences)
{
    char str[] = "Hello World!";
    char c[] = "HeloWrd!z";

    cr_assert_eq(my_strspn(str, c), strspn(str, c));
}

Test(strspn, no_occurence)
{
    char str[] = "Hello World!";
    char c[] = "z";

    cr_assert_eq(my_strspn(str, c), strspn(str, c));
}
