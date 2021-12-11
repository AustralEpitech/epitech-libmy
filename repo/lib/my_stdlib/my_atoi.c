/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_atoi
*/

#include "my_stdlib.h"

int my_atoi(const char *nptr)
{
    return my_strtol(nptr, NULL, 10);
}
