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
    int neg = 1;
    int test = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            neg *= -1;
        else if (!my_char_isnum(str[i]) && str[i] != '+')
            neg = 1;
        for (; my_char_isnum(str[i]); i++) {
            nb = nb * 10 + str[i] - '0';
            test = 1;
        }
        if (test)
            return (nb * neg);
    }
    return (0);
}