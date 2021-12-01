/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_fprintf
*/

#include "my_stdio.h"

int my_fprintf(int fildes, const char *format, ...)
{
    va_list ap;
    int len;

    va_start(ap, format);
    len = my_vfprintf(fildes, format, ap);
    va_end(ap);
    return len;
}
