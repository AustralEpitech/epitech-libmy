/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strncpy
*/

#include "my_string.h"

char *my_strncpy(char *dest, const char *src, size_t n)
{
    my_memset(dest + n, '\0', n);
    return my_memcpy(dest, src, n);
}
