/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** my_arrnlen
*/

#include <stddef.h>

size_t my_arrnlen(const void *s, size_t maxlen)
{
    size_t i = 0;
    const char **cs = (const char **)s;

    while (i < maxlen && cs[i]) {
        i++;
    }
    return i;
}
