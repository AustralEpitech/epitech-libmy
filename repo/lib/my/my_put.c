/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_put
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int my_putchar(char c)
{
    return write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    int len = 0;

    if (nb < 0) {
        len += my_putchar('-');
        nb *= -1;
    }
    if (nb > 9)
        len += my_put_nbr(nb / 10);
    return len + my_putchar(nb % 10 + '0');
}

int my_putstr(char const *str)
{
    return write(1, str, my_strlen(str));
}

static int print_var(char flag, va_list ap)
{
    switch (flag) {
        case 'c':
            return my_putchar(va_arg(ap, int));
        case 's':
            return my_putstr(va_arg(ap, char *));
        case 'd':
            return my_put_nbr(va_arg(ap, int));
    }
    return 0;
}

int my_printf(char const *format, ...)
{
    va_list ap;
    int len = 0;

    va_start(ap, format);
    for (int i = 0, size = 0; format[i]; i++) {
        for (size = 0; format[size + i] != '%' && format[size + i]; size++);
        if (size) {
            i += write(1, format + i, size) - 1;
            len += size;
        } else if (format[i] == '%')
            len += print_var(format[++i], ap);
    }
    va_end(ap);
    return len;
}