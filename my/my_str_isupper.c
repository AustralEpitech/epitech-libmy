/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_isupper
*/

int my_str_isupper(char const *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (!('A' <= str[i] && str[i] <= 'Z')) {
            return (0);
        }
    }
    return (1);
}