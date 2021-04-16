/*
** EPITECH PROJECT, 2021
** %%PROJ%%
** File description:
** test_%%PROJ%%
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int %%PROJ%%(void);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(test_%%PROJ%%, %%PROJ%%_1)
{
    return;
}