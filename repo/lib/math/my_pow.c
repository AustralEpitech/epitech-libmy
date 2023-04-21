/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_pow
*/

int my_pow(int n, int p)
{
    if (n == 1 || !p) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    return n * my_pow(n, p - 1);
}
