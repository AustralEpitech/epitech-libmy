/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str
*/

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
    dest[len + i];
    return (dest);
}

int my_strcmp(char const *s1, char const *s2)
{
    int len = my_strlen(s1);
    int len1 = my_strlen(s2);
    int diff = 0;

    if (len1 > len)
        len = len1;
    for (int i = 0; i < len; i++) {
        diff = s1[i] - s2[i];
        if (diff)
            return (diff);
    }
    return (0);
}

char *my_strdup(char *src)
{
    char *res = NULL;
    int size = sizeof(src);

    res = malloc(sizeof(src));
    for (int i = 0; src[i]; i++)
        res[i] = src[i];
    res[size] = 0;
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