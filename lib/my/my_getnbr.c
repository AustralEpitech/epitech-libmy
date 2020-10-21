/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_getnbr
*/

int my_is_num(char c)
{
    if ('0' <= c && c <= '9')
        return (1);
    return (0);
}

int my_getnbr(char const *str)
{
    int nb = 0;
    int neg = 1;
    int test = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            neg *= -1;
        else if (!my_is_num(str[i]) && str[i] != '+')
            neg = 1;
        for (; my_is_num(str[i]); i++) {
            nb = nb * 10 + str[i] - '0';
            test = 1;
        }
        if (test)
            return (nb * neg);
    }
    return (0);
}