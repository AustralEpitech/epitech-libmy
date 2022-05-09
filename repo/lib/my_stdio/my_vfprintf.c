/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_vfprintf
*/

#include "my_stdio.h"
#include "my_stdlib.h"
#include "my_string.h"
#include "my_printf.h"

static int my_bprintc(int fildes, buf_t *buf, char c)
{
    if (c)
        buf->str[buf->size++] = c;
    if (!c || buf->size >= BUF_SIZE) {
        write(fildes, buf->str, buf->size);
        buf->written += buf->size;
        buf->size = 0;
    }
    return 0;
}

static int my_bprintl(int fildes, buf_t *buf, long nb, const char *base)
{
    int base_size = my_strlen(base);

    if (nb < 0)
        my_bprintc(fildes, buf, '-');
    if (!nb)
        my_bprintc(fildes, buf, '0');
    for (; nb; nb /= base_size)
        my_bprintc(fildes, buf, base[ABS(nb % base_size)]);
    return 0;
}

static int my_bprints(int fildes, buf_t *buf, const char *str)
{
    if (str)
        for (; *str; str++)
            my_bprintc(fildes, buf, *str);
    else
        my_bprints(fildes, buf, "(null)");
    return 0;
}

static int my_bprintv(int fildes, buf_t *buf, const char *format, va_list ap)
{
    switch (*format) {
        case 'd':
        case 'i':
            return my_bprintl(fildes, buf, va_arg(ap, int), "0123456789");
        case 'b':
            return my_bprintl(fildes, buf, va_arg(ap, int), "01");
        case 'o':
            return my_bprintl(fildes, buf, va_arg(ap, int), "01234567");
        case 'u':
            return my_bprintl(fildes, buf, va_arg(ap, int), "0123456789");
        case 'x':
            return my_bprintl(fildes, buf, va_arg(ap, int), "0123456789abcdef");
        case 'c':
            return my_bprintc(fildes, buf, va_arg(ap, int));
        case 's':
            return my_bprints(fildes, buf, va_arg(ap, char *));
        case '%':
            return my_bprintc(fildes, buf, '%');
    }
    return my_bprintc(fildes, buf, '%');
}

int my_vfprintf(int fildes, const char *format, va_list ap)
{
    buf_t buf = {0};

    if (!format)
        return -1;
    for (; *format; format++)
        if (*format == '%')
            my_bprintv(fildes, &buf, ++format, ap);
        else
            my_bprintc(fildes, &buf, *format);
    my_bprintc(fildes, &buf, '\0');
    return buf.written;
}
