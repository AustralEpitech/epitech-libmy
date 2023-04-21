/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strcpy
*/

#include <limits.h>
#include "my_string.h"

char *my_strcpy(char *dest, const char *src)
{
    return my_memccpy(dest, src, '\0', ULONG_MAX);
}
