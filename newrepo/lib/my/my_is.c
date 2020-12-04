/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_is
*/

int my_char_isnum(char c, int i)
{
    return ('0' <= c && c <= '9' || c == '-' && i == 0);
}

int my_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    for (int i = 2; i <= nb / 2; i++) {
        if (nb / i * i == nb)
            return (0);
    }
    return (1);
}