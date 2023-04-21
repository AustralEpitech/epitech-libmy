/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** my_arrlen
*/

#include <stddef.h>

size_t my_arrlen(const void *s)
{
    size_t i = 0;
    const char **cs = (const char **)s;

    while (cs[i]) {
        i++;
    }
    return i;
}
