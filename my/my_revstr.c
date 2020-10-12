/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_revstr
*/

int my_strlen(char const *);

char *my_revstr(char *str)
{
    char c;
    int len = my_strlen(str) - 1;

    for (int i = 0; i < len; i++) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
    }
    return (str);
}