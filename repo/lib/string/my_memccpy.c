/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_memccpy
*/

#include <stddef.h>

void *my_memccpy(void *dest, const void *src, int c, size_t n)
{
    const char *csrc = src;
    char *cdest = dest;

    while (n && *csrc != c) {
        *cdest++ = *csrc++;
        n--;
    }
    return dest;
}
