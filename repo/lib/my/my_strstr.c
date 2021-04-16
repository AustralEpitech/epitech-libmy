/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strstr
*/

#include "my.h"

static int check(char const *str, char const *to_find)
{
    for (int i = 0; to_find[i]; i++)
        if (str[i] != to_find[i])
            return 0;
    return 1;
}

char *my_strstr(char const *str, char const *to_find)
{
    int stop = my_strlen(str) - my_strlen(to_find);

    for (int i = 0; i <= stop; i++)
        if (check(str + i, to_find))
            return str + i;
    return (char *)0;
}