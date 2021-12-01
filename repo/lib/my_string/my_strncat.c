/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strncat
*/

#include "my_string.h"

char *my_strncat(char *dest, const char *src, size_t n)
{
    size_t len = my_strlen(dest);

    my_memcpy(dest + len, src, n);
    dest[len + n] = '\0';
    return dest;
}
