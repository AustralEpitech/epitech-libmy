/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    my_strcpy(dest + my_strlen(dest), src);
    return dest;
}
