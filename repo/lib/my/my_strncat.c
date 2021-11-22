/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, size_t n)
{
    size_t len = my_strlen(dest);

    my_memcpy(dest + len, src, n);
    dest[len + n] = '\0';
    return dest;
}
