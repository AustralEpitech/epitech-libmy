/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strnlen
*/

#include <stddef.h>

size_t my_strnlen(const char *s, size_t maxlen)
{
    size_t i = 0;

    while (i < maxlen && s[i])
        i++;
    return i;
}
