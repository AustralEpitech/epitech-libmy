/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    int len = my_strlen(str);
    char c;

    for (int i = 0; i < len; i++) {
        c = str[i];
        if (c <= 'Z' && 'A' <= c) {
            c = str[i] - 'A' + 'a';
        }
        str[i] = c;
    }
    return (str);
}