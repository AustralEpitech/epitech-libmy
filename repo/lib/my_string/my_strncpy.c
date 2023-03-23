/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strncpy
*/

#include "my_string.h"

char *my_strncpy(char *dest, const char *src, size_t n)
{
    size_t size = my_strnlen(src, n);

    if (size != n) {
        my_memset(dest + size, '\0', n - size);
    }
    return my_memcpy(dest, src, size);
}
