/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_islower
*/

int my_strlen(char const *);

int my_str_islower(char const *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (!('a' <= str[i] && str[i] <= 'z')) {
            return (0);
        }
    }
    return (1);
}