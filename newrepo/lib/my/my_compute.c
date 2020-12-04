/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_compute
*/

int my_compute_power_rec(int nb, int power)
{
    if (nb == 1 || power == 0)
        return (1);
    if (power < 0 || nb == 0)
        return (0);
    nb *= my_compute_power_rec(nb, power - 1);
    return (nb);
}

int my_compute_square_root(int nb)
{
    for (int i = 0; i <= nb / 2; i++) {
        if (i * i == nb)
            return (i);
    }
    return (0);
}