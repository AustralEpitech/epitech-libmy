/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    char *saveptr = dest;

    dest += my_strlen(dest);
    for (; *src; src++)
        *dest = *src;
    *dest = '\0';
    return saveptr;
}
