/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strupcase
*/

int my_strlen(char const *);

char *my_strupcase(char *str)
{
    int len = my_strlen(str);
    char c;

    for (int i = 0; i < len; i++) {
        c = str[i];
        if (c <= 'z' && 'a' <= c) {
            c = str[i] - 'a' + 'A';
        }
        str[i] = c;
    }
    return (str);
}