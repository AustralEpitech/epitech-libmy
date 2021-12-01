/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strncmp
*/

#include <stddef.h>

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    for (; *s1 == *s2 && *s1 && n; n--) {
        s1++;
        s2++;
    }
    return n ? *s1 - *s2 : 0;
}
