/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_vfprintf
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

static int print_flag(int fildes, char flag, va_list ap)
{
    switch (flag) {
        case 'd':
            return my_fputnbr(fildes, va_arg(ap, int));
        case 'b':
            return my_fputnbr_base(fildes, va_arg(ap, int), "01");
        case 'o':
            return my_fputnbr_base(fildes, va_arg(ap, int), "01234567");
        case 'x':
            return my_fputnbr_base(fildes, va_arg(ap, int), "0123456789abcdef");
        case 'c':
            return my_fputc(fildes, va_arg(ap, int));
        case 's':
            return my_fputs(fildes, va_arg(ap, char *));
        case '%':
            return my_fputs(fildes, "%%");
    }
    return my_fputs(fildes, (char []){'%', flag, '\0'});
}

int my_vfprintf(int fildes, char const *format, va_list ap)
{
    int len = 0;

    for (int size = 0; *format; format++) {
        for (size = 0; *(format + size) != '%' && *(format + size); size++);
        if (size) {
            format += write(fildes, format, size) - 1;
            len += size;
        } else if (*format == '%')
            len += print_flag(fildes, *++format, ap);
    }
    return len;
}
