/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strcat
*/

#include "my_string.h"

char *my_strcat(char *dest, const char *src)
{
    my_strcpy(dest + my_strlen(dest), src);
    return dest;
}
