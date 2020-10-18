/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_isalpha
*/

int my_strlen(char const *);

int my_str_isalpha(char const *str)
{
    int len = my_strlen(str);
    int s;

    for (int i = 0; i < len; i++) {
        s = str[i];
        if (!('A' <= s && s <= 'Z' || 'a' <= s && s <= 'z')) {
            return (0);
        }
    }
    return (1);
}