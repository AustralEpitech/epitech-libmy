/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_nbr
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    short sign = 1;

    while (*str == '+' || *str == '-')
        sign *= *str++ == '-' ? -1 : 1;
    for (int i = 0; ISNUM(str[i]); i++)
        nb = nb * 10 + str[i] - '0';
    return nb * sign;
}

int my_is_prime(int nb)
{
    int stop = nb / 2;

    if (nb < 2)
        return 0;
    for (int i = 2; i <= stop; i++)
        if (!(nb % i))
            return 0;
    return 1;
}
