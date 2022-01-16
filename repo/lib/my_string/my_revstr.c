/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_revstr
*/

#include "my_stdlib.h"
#include "my_string.h"

char *my_revstr(char *str)
{
    char c = 0;
    size_t last = my_strlen(str) - 1;
    size_t stop = (last + 1) / 2;

    for (size_t i = 0; i < stop; i++) {
        c = str[i];
        str[i] = str[last - i];
        str[last - i] = c;
    }
    return str;
}
