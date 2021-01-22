/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_put
*/

#include <unistd.h>
#include <stdarg.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    my_putchar(nb + '0');
}

void my_putstr(char const *str)
{
    write(1, str, sizeof(str));
}

static void print_var(char flag, va_list ap)
{
    switch(flag) {
        case 'c':
            return (my_putchar(va_arg(ap, int)));
        case 's':
            return (my_putstr(va_arg(ap, char *)));
        case 'd':
            return (my_put_nbr(va_arg(ap, int)));
    }
}

void my_printf(char const *format, ...)
{
    va_list ap;
    int size = 0;

    va_start(ap, format);
    for (int i = 0; format[i]; i++) {
        for (size = 0; format[size + i] != '%' && format[size + i]; size++);
        if (size)
            i += write(1, format + i, size);
        if (format[i] == '%') {
            i++;
            print_var(format[i], ap);
        }
    }
    va_end(ap);
}