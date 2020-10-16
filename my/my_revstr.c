/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_revstr
*/

#include <stdio.h>

int my_strlen(char const *);

char *my_revstr(char *str)
{
    char c;
    int len = my_strlen(str) - 1;

    for (int i = 0; i < (len + 1) / 2; i++) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
    }
    return (str);
}

int main (void)
{
    char str[] = "abcdef";
    printf("%s\n", my_revstr(str));
}