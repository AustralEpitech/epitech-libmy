/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_put_nbr
*/

int my_put_nbr(int nb)
{
    int nbr = nb;
    int i;

    for (i = 0; nbr > 10; i++)
        nbr /= 10;
    my_putchar('0' + nbr);
    if (nbr != nb)
        my_put_nbr(nb - nbr * 10 * i);
}