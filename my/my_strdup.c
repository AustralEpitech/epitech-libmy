/*
** EPITECH PROJECT, 2020
** cpool08
** File description:
** my_strdup
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *str;
    int len = my_strlen(src);

    str = malloc(sizeof (char) * (len + 1));
    my_strcpy(str, src);
    return (str);
}