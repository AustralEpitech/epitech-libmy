/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_stdlib
*/

#ifndef MY_STDLIB_H
    #define MY_STDLIB_H

    #define ABS(n)      ((n) < 0 ? -(n) : (n))
    #define FLOOR(n)    ((int)(n))
    #define CEIL(n)     ((int)((n) + 1))

    #include <stdlib.h>

int my_atoi(const char *nptr);

#endif /* my_stdlib.h */
