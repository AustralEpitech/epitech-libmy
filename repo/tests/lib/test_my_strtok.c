/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_strtok
*/

#include <string.h>
#include <criterion/criterion.h>
#include "my.h"

Test(strtok, hello_world_space_o)
{
    char delim[] = " o";
    char my_str[] = "Hello World!";
    char str[] = "Hello World!";
    char *my_res = my_strtok(my_str, delim);
    char *res = strtok(str, delim);

    do {
        cr_assert_str_eq(my_res, res);
        my_res = my_strtok(NULL, delim);
        res = strtok(NULL, delim);
    } while (my_res);
}

Test(strtok, hello_world_x)
{
    char delim[] = "x";
    char my_str[] = "Hello World!";
    char str[] = "Hello World!";
    char *my_res = my_strtok(my_str, delim);
    char *res = strtok(str, delim);

    do {
        cr_assert_str_eq(my_res, res);
        my_res = my_strtok(NULL, delim);
        res = strtok(NULL, delim);
    } while (my_res);
}

Test(strtok, hello_world_empty)
{
    char delim[] = "";
    char my_str[] = "Hello World!";
    char str[] = "Hello World!";
    char *my_res = my_strtok(my_str, delim);
    char *res = strtok(str, delim);

    do {
        cr_assert_str_eq(my_res, res);
        my_res = my_strtok(NULL, delim);
        res = strtok(NULL, delim);
    } while (my_res);
}

Test(strtok, empty_space_o)
{
    char delim[] = " o";
    char my_str[] = "";
    char str[] = "";

    cr_assert_eq(my_strtok(my_str, delim), strtok(str, delim));
}

Test(strtok, empty_empty)
{
    char delim[] = "";
    char my_str[] = "";
    char str[] = "";

    cr_assert_eq(my_strtok(my_str, delim), strtok(str, delim));
}
