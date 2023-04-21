/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strncmp
*/

#include <stddef.h>

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 == *s2 && *s1 && n) {
        s1++;
        s2++;
        n--;
    }
    return n ? *s1 - *s2 : 0;
}
