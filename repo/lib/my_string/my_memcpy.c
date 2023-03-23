/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_memcpy
*/

#include <stddef.h>

void *my_memcpy(void *dest, const void *src, size_t n)
{
    const char *csrc = (const char *)src;
    char *cdest = (char *)dest;

    while (n) {
        *cdest++ = *csrc++;
        n--;
    }
    return dest;
}
