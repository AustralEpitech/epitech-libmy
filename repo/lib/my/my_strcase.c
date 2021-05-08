/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strcase
*/

#include "my.h"

char *my_strupcase(char *str)
{
    char shift = 'a' - 'A';

    for (int i = 0; str[i]; i++)
        str[i] -= shift * ISLOW(str[i]);
    return str;
}

char *my_strlowcase(char *str)
{
    char shift = 'A' - 'a';

    for (int i = 0; str[i]; i++)
        str[i] -= shift * ISUP(str[i]);
    return str;
}
