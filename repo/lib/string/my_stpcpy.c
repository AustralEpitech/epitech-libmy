/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_stpcpy
*/

#include "my_string.h"

char *my_stpcpy(char *dest, const char *src)
{
    return my_mempcpy(dest, src, my_strlen(src) + 1);
}
