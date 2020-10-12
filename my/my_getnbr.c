/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int nb;

    for (int i = 0; str[i] != '\0'; i++) {
        for (; '0' <= str[i] && str[i] <= '9'; i++)
            nb = nb * 10 + str[i] - '0';
        if (nb >= 0)
            return(nb);
    }
    return (0);
}