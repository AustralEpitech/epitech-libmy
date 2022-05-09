/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_stdlib
*/

#ifndef MY_STDLIB_H
    #define MY_STDLIB_H

    #define ABS(n)      ((n) < 0 ? -(n) : (n))

    #include <stdlib.h>

int  my_atoi(const char *nptr);
long my_strtol(const char *nptr, char **endptr, int base);

#endif /* my_stdlib.h */
