/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strcpy
*/

#include "my.h"

char *my_strcpy(char *dest, const char *src)
{
    return my_memcpy(dest, src, my_strlen(src) + 1);
}
