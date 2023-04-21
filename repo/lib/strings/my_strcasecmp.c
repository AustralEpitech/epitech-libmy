/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strcasecmp
*/

#include "my_ctype.h"

int my_strcasecmp(const char *s1, const char *s2)
{
    while (TOLOWER(*s1) == TOLOWER(*s2) && *s1) {
        s1++;
        s2++;
    }
    return TOLOWER(*s1) - TOLOWER(*s2);
}
