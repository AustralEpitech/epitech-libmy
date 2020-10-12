/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (!('0' <= str[i] && str[i] <= '9')) {
            return (0);
        }
    }
    return (1);
}