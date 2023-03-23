/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_printf
*/

#include "my_stdio.h"

int my_printf(const char *format, ...)
{
    va_list ap;
    int len;

    va_start(ap, format);
    len = my_vfprintf(STDOUT_FILENO, format, ap);
    va_end(ap);
    return len;
}
