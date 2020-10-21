/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (int i = 1; i; nb++) {
        if (my_is_prime(nb))
            return (nb);
        nb++;
    }
}