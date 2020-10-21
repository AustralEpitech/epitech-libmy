/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    for (int i = 0; i <= nb / 2; i++) {
        if (i * i == nb)
            return (i);
    }
    return (0);
}