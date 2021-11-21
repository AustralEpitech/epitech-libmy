/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strncat
*/

#include "my.h"

char *strncat(char *dest, char const *src, size_t n)
{
    char *saveptr = dest;

    dest += my_strlen(dest);
    for (; *src && n; n--)
        *dest = *src++;
    *dest = '\0';
    return saveptr;
}
