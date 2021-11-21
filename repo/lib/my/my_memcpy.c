/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_memcpy
*/

#include <stddef.h>

void *my_memcpy(void *dest, void const *src, size_t n)
{
    char *csrc = (char *)src;
    char *cdest = (char *)dest;

    for (; n; n--)
        *cdest++ = *csrc++;
    return dest;
}
