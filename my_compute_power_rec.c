/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    if (nb == 1 || p == 0) {
        return (1);
    }
    if (p < 0 || nb == 0) {
        return (0);
    }
    nb *= my_compute_power_rec(nb, p - 1);
    return (nb);
}