/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_compute_power_rec
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