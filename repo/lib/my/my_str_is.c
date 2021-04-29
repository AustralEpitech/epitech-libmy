/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_is
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    while ISPRINT(*str)
        str++;
    return !*str || ISPRINT(*str);
}

int my_str_isnum(char const *str)
{
    while ISNUM(*str)
        str++;
    return !*str || ISNUM(*str);
}

int my_str_isupper(char const *str)
{
    while ISUP(*str)
        str++;
    return !*str || ISUP(*str);
}

int my_str_islower(char const *str)
{
    while ISLOW(*str)
        str++;
    return !*str || ISLOW(*str);
}

int my_str_isalpha(char const *str)
{
    while ISALPHA(*str)
        str++;
    return !*str || ISALPHA(*str);
}