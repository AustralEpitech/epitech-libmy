/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_put
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else
        my_putchar(nb + '0');
}

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}