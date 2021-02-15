/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strcase
*/

#include "my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (ISLOW(str[i]))
            str[i] -= 'a' - 'A';
    return (str);
}

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (ISUP(str[i]))
            str[i] -= 'A' - 'a';
    return (str);
}