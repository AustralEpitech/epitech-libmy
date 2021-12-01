/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_printf
*/

#include <stdio.h>
#include "tests.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(printf, only_format, .init=redirect_all_stdout)
{
    FILE *file = cr_get_redirected_stderr();
    char err[1000];

    my_printf("Hello World!\n");
    fprintf(stderr, "Hello World!\n");
    fread(err, 1000, sizeof(char), file);
    cr_assert_stdout_eq_str(err);
}

Test(printf, char_str_and_nb, .init=redirect_all_stdout)
{
    FILE *file = cr_get_redirected_stderr();
    char err[1000];

    my_printf("Hello World!%c, %s, %d\n", 'c', "test", -12);
    fprintf(stderr, "Hello World!%c, %s, %d\n", 'c', "test", -12);
    fread(err, 1000, sizeof(char), file);
    cr_assert_stdout_eq_str(err);
}

Test(printf, all_flags, .init=redirect_all_stdout)
{
    FILE *file = cr_get_redirected_stderr();
    char err[1000];
    char c = 'c';
    char str[] = "str";
    int nb = 42;

    my_printf("Hello World! %d %b %o %x %c %s %% %w\n",
            nb, nb, nb, nb, c, str);
    fprintf(stderr, "Hello World! %d 101010 %o %x %c %s %% %w\n",
            nb, nb, nb, c, str);
    fread(err, 1000, sizeof(char), file);
    cr_assert_stdout_eq_str(err);
}
