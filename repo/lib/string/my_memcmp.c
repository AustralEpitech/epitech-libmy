/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_memcpy
*/

#include "my_string.h"

int my_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *cs1 = s1;
    const char *cs2 = s2;

    while (n) {
        cs1++;
        cs2++;
        n--;
    }
    return *cs1 - *cs2;
}
