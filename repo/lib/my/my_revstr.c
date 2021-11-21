/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    char c = 0;
    size_t len = my_strlen(str) - 1;
    size_t stop = (len + 1) / 2;

    for (size_t i = 0; i < stop; i++) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
    }
    return str;
}
