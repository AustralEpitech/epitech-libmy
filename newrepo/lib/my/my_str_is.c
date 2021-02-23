/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_is
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!ISPRINT(str[i]))
            return (0);
    return (1);
}

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    for (; str[i]; i++)
        if (!ISNUM(str[i]))
            return (0);
    return (1);
}

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!ISUP(str[i]))
            return (0);
    return (1);
}

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!ISLOW(str[i]))
            return (0);
    return (1);
}

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!ISALPHA(str[i]))
            return (0);
    return (1);
}