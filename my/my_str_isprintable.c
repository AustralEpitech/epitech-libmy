/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_isprintable
*/

int my_strlen(char const *);

int my_str_isprintable(char const *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (!(' ' <= str[i] && str[i] <= '~')) {
            return (0);
        }
    }
    return (1);
}