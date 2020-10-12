/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int test;
    int value = nb;
    int sqrt_overflow = 46340;

    if (nb / 2 > sqrt_overflow) {
        value = sqrt_overflow;
    }
    for (int i = 0; i <= value; i++) {
        test = i * i;
        if (test == nb) {
            return (i);
        }
    }
    return (0);
}