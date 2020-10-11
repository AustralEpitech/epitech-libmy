/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_find_prime_sup
*/

int my_find_prime_sup(int nb)
{
    int i = - 1;
    while (i != 0) {
        if (my_is_prime(nb)) {
            return (nb);
        }
        nb++;
    }
}
