/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strncasecmp
*/

#include <stddef.h>
#include "my_ctype.h"

int my_strncasecmp(const char *s1, const char *s2, size_t n)
{
    for (; TOLOWER(*s1) == TOLOWER(*s2) && *s1 && n; n--) {
        s1++;
        s2++;
    }
    return n ? TOLOWER(*s1) - TOLOWER(*s2) : 0;
}
