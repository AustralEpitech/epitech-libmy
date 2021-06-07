/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return i;
}

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    for (; src[i]; i++)
        dest[len + i] = src[i];
    dest[len + i] = 0;
    return dest;
}

int my_strcmp(char const *s1, char const *s2)
{
    if (!(s1 && s2))
        return -1;
    while (!(*s1 - *s2) && *s1) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *res = malloc((len + 1) * sizeof *res);

    if (!res)
        return NULL;
    res[len] = 0;
    for (int i = 0; src[i]; i++)
        res[i] = src[i];
    return res;
}

char *my_revstr(char *str)
{
    char c = 0;
    int len = my_strlen(str) - 1;
    int stop = (len + 1) / 2;

    for (int i = 0; i < stop; i++) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
    }
    return str;
}
