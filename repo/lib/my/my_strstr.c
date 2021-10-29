/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strstr
*/

#include <stddef.h>
#include "my.h"

static int check(char const *str, char const *to_find)
{
    for (int i = 0; to_find[i]; i++)
        if (str[i] != to_find[i])
            return 0;
    return 1;
}

char *my_strstr(char *str, char const *to_find)
{
    if (!(*str) && !(*to_find))
        return str;
    for (int i = 0; str[i]; i++)
        if (check(str + i, to_find))
            return str + i;
    return NULL;
}
