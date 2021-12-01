/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strtok
*/

#include "my_string.h"

char *my_strtok(char *str, const char *delim)
{
    static char *olds;

    return my_strtok_r(str, delim, &olds);
}
