/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_stpncpy
*/

#include "my_string.h"

char *my_stpncpy(char *dst, const char *src, size_t n)
{
    return my_strncpy(dst, src, n) + n;
}
