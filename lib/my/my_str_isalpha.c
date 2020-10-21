/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int s;

    for (int i = 0; i < str[i] != '\0'; i++) {
        s = str[i];
        if (!('A' <= s && s <= 'Z' || 'a' <= s && s <= 'z'))
            return (0);
    }
    return (1);
}