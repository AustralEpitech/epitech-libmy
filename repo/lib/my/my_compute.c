/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_compute
*/

int my_compute_power_rec(int nb, int power)
{
    if (nb == 1 || !power)
        return 1;
    if (power < 0)
        return 0;
    nb *= my_compute_power_rec(nb, power - 1);
    return nb;
}

int my_compute_square_root(int nb)
{
    int pow = 0;
    int i = 1;

    for (; pow < nb; i++)
        pow = i * i;
    return pow == nb ? --i : 0;
}
