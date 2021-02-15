/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strstr
*/

#include "my.h"

static int check(char *str, char const *to_find)
{
    for (int i = 0; to_find[i]; i++)
        if (str[i] != to_find[i])
            return (0);
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen(str);
    int to_findlen = my_strlen(to_find);

    for (int i = 0; i <= len - to_findlen; i++)
            if (check(str + i, to_find))
                return (str + i);
    return ((void *)0);
}