/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_getnbr
*/

int my_char_isnum(char c);

int my_getnbr(char const *str)
{
    int nb = 0;
    int neg = str[0] == '-' ? -1 : 1;

    for (int i = 0; my_char_isnum(str[i]); i++)
            nb = nb * 10 + str[i] - '0';
    return (nb * neg);
}