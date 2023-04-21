/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strspn
*/

#include "my_string.h"

size_t my_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while (s[i] && my_strchr(accept, s[i])) {
        i++;
    }
    return i;
}
