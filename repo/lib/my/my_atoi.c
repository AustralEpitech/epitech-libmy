/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_atoi
*/

#include "my.h"

int my_atoi(const char *nptr)
{
    int n = 0;
    short sign = 1;

    sign = *nptr == '-' ? -1 : 1;
    nptr += *nptr == '-' || *nptr == '+';
    for (; ISDIGIT(*nptr); nptr++)
        n = n * 10 + sign * TODIGIT(*nptr);
    return n;
}
