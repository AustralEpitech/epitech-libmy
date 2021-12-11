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

static int flush(int fildes, buf_t *buf)
{
    size_t size = write(fildes, buf->str, buf->size);

    buf->written += size;
    buf->size = 0;
    return size;
}

static size_t buf_append(int fildes, buf_t *buf, const char *str, size_t len)
{
    int diff = buf->size + len;
    size_t size = len;

    if (diff > BUF_SIZE) {
        diff = BUF_SIZE - buf->size;
        my_strncpy(buf->str + buf->size, str, diff);
        buf->size = BUF_SIZE;
        flush(fildes, buf);
        len -= diff;
        str += diff;
    }
    while (len > BUF_SIZE) {
        buf->written += write(fildes, str, BUF_SIZE);
        str += BUF_SIZE;
        len -= BUF_SIZE;
    }
    my_strncpy(buf->str + buf->size, str, len);
    buf->size += len;
    return size - len;
}

static char *getnbr(char *str, long nb, const char *base)
{
    int len = 0;
    int size = 8 * sizeof(int);
    short neg = nb < 0;
    int digit;
    int base_size = my_strlen(base);

    str[size] = '\0';
    for (; nb; nb /= base_size) {
        digit = nb % base_size;
        str[size - ++len] = base[ABS(digit)];
    }
    if (neg)
        str[size - ++len] = '-';
    return str + size - len;
}

static char *get_var(char *tmp, char flag, va_list ap)
{
    switch (flag) {
        case 'd':
        case 'i':
            return getnbr(tmp, va_arg(ap, int), "0123456789");
        case 'b':
            return getnbr(tmp, va_arg(ap, unsigned), "01");
        case 'o':
            return getnbr(tmp, va_arg(ap, unsigned), "01234567");
        case 'u':
            return getnbr(tmp, va_arg(ap, unsigned), "0123456789");
        case 'x':
            return getnbr(tmp, va_arg(ap, unsigned), "0123456789abcdef");
        case 'c':
            return my_strcpy(tmp, (char []){va_arg(ap, int), '\0'});
        case '%':
            return "%";
    }
    return my_strcpy(tmp, (char []){flag, '\0'});
}

int my_vfprintf(int fildes, const char *format, va_list ap)
{
    buf_t buf = {0};
    size_t size;
    char nb[8 * sizeof(int) + 1] = {0};
    char *tmp;

    while (*format) {
        size = my_strcspn(format, "%");
        buf_append(fildes, &buf, format, size);
        format += size;
        if (*format != '%')
            break;
        if (format[1] == 's')
            tmp = va_arg(ap, char *);
        else
            tmp = get_var(nb, format[1], ap);
        buf_append(fildes, &buf, tmp, my_strlen(tmp));
        format += 2;
    }
    flush(fildes, &buf);
    return buf.written;
}
