/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_memcpy
*/

#include "my_string.h"

int my_memcmp(const void *s1, const void *s2, size_t n)
{
    return my_strncmp(s1, s2, n);
}
