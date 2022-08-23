/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_memset
*/

#include <stddef.h>

void *my_memset(void *s, int c, size_t n)
{
    char *dest = (char *)s;

    while (n) {
        *dest++ = c;
        n--;
    }
    return s;
}
