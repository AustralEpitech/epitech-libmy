/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    size_t i = 0;

    for (; str[i]; i++);
    return i;
}

char *my_strcat(char *dest, char const *src)
{
    size_t len = my_strlen(dest);
    size_t i = 0;

    for (; src[i]; i++)
        dest[len + i] = src[i];
    dest[len + i] = 0;
    return dest;
}

int my_strcmp(char const *s1, char const *s2)
{
    if (!(s1 && s2))
        return -1;
    while (!(*s1++ - *s2++) && *s1 && *s2);
    return *s1 - *s2;
}

char *my_strdup(char const *src)
{
    char *res = NULL;
    size_t len = my_strlen(src);

    res = malloc(len + 1);
    res[len] = 0;
    for (size_t i = 0; src[i]; i++)
        res[i] = src[i];
    return res;
}

char *my_revstr(char *str)
{
    char c = 0;
    size_t len = my_strlen(str) - 1;
    size_t stop = (len + 1) / 2;

    for (int i = 0; i < stop; i++) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
    }
    return str;
}