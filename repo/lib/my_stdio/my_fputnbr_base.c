/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_fputnbr_base
*/

#include <unistd.h>
#include "my_string.h"
#include "my_stdlib.h"

int my_fputnbr_base(int fildes, int nb, char *base)
{
    int len = 0;
    int size = 8 * sizeof nb;
    char str[size];
    int base_size = my_strlen(base);
    short neg = nb < 0;

    if (!nb)
        return write(fildes, base, 1);
    for (; nb; nb /= base_size)
        str[size - ++len] = base[ABS(nb % base_size)];
    if (neg)
        str[size - ++len] = '-';
    return write(fildes, str + size - len, len);
}
