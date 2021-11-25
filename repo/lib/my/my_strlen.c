/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strlen
*/

#include <stddef.h>

size_t my_strlen(const char *s)
{
    size_t i = 0;

    while (s[i])
        i++;
    return i;
}
