/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_getnbr
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int neg = str[0] == '-' ? -1 : 1;

    for (int i = 0; ISNUM(str[i]); i++)
        nb = nb * 10 + str[i] - '0';
    return (nb * neg);
}

int my_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    for (int i = 2; i <= nb / 2; i++)
        if (nb / i * i == nb)
            return (0);
    return (1);
}