/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; i < str[i] != '\0'; i++) {
        if (!(' ' <= str[i] && str[i] <= '~'))
            return (0);
    }
    return (1);
}