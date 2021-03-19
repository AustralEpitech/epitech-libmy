/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str
*/

#include "my.h"
#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    for (; src[i]; i++)
        dest[len + i] = src[i];
    dest[len + i] = 0;
    return (dest);
}

int my_strcmp(char const *s1, char const *s2)
{
    if (!(s1 && s2))
        return (-1);
    while (!(*s1++ - *s2++) && *s1 && *s2);
    return (*--s1 - *--s2);
}

char *my_strdup(char *src)
{
    char *res = NULL;
    int len = my_strlen(src);

    res = malloc(len + 1);
    res[len] = 0;
    for (int i = 0; src[i]; i++)
        res[i] = src[i];
    return (res);
}

char *my_revstr(char *str)
{
    char c = 0;
    int len = my_strlen(str) - 1;

    for (int i = 0; i < (len + 1) / 2; i++) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
    }
    return (str);
}