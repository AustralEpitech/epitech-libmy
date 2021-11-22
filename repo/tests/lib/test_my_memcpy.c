/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_memcpy
*/

#include "tests.h"

Test(memcpy, _1to10)
{
    int src[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof src / sizeof *src;
    int dest[size];

    my_memcpy(dest, src, size);
    //cr_assert_arr_eq(dest, src);
}
