/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_atoi
*/

#include "my.h"

int my_atoi(char const *nptr)
{
    int n = 0;
    short sign = 1;

    sign = *nptr == '-';
    nptr += *nptr == '-' || *nptr == '+';
    if (ISDIGIT(*nptr))
        n = sign * TODIGIT(*nptr++);
    for (; ISDIGIT(*nptr); nptr++)
        n = n * 10 + TODIGIT(*nptr);
    return n;
}
