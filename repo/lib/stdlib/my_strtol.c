/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strtol
*/

#include "my_stdlib.h"
#include "my_ctype.h"

long my_strtol(const char *nptr, char **endptr, int base)
{
    long n = 0;
    short sign = 1;
    char c;

    if (base < 2 || base > 36)
        return 0;
    if (*nptr == '-') {
        sign = -1;
        nptr++;
    } else if (*nptr == '+')
        nptr++;
    for (; *nptr; nptr++) {
        c = ISDIGIT(*nptr) ? TODIGIT(*nptr) : TOLOWER(*nptr) - 'a' + 10;
        if (c >= base || !ISALNUM(*nptr))
            break;
        n = n * base + sign * c;
    }
    if (endptr)
        *endptr = (char *)nptr;
    return n;
}
