/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int test;
    int value = nb / 2;
    int sqrt_overflow = 46340;

    if (nb <= 1) {
        return (0);
    }
    if (value > sqrt_overflow) {
        value = sqrt_overflow;
    }
    for (int i = 2; i <= value; i++) {
        test = nb / i;
        if (test * i == nb) {
            return (0);
        }
    }
    return (1);
}