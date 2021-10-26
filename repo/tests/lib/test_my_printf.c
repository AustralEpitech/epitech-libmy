/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(printf, only_format, .init=cr_redirect_stdout)
{
    my_printf("Hello World!\n");
    cr_assert_stdout_eq_str("Hello World!\n");
}

Test(printf, char_str_and_nb, .init=cr_redirect_stdout)
{
    my_printf("Hello World!%c, %s, %d\n", 'c', "test", -12);
    cr_assert_stdout_eq_str("Hello World!c, test, -12\n");
}
