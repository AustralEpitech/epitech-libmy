/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strcpy
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    return my_memcpy(dest, src, my_strlen(src) + 1);
}
