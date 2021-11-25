/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_printf
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int my_printf(const char *format, ...)
{
    va_list ap;
    int len;

    va_start(ap, format);
    len = my_vfprintf(STDOUT_FILENO, format, ap);
    va_end(ap);
    return len;
}
