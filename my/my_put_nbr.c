/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_put_nbr
*/

void my_putchar(char);

int my_put_nbr(int nb)
{
    int nbr;
    int i;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
}