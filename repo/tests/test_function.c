/*
** EPITECH PROJECT, {{YEAR}}
** {{PROJ}}
** File description:
** test_{{PROJ}}
*/

#include "tests.h"

Test(test_function, function_1, .init = cr_redirect_stdout)
{
    char str[] = "Hello, World!\n";

    my_printf(str);
    cr_assert_stdout_eq(str);
}
