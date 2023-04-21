/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strchr
*/

#include "my_string.h"

char *my_strchr(const char *s, int c)
{
    return my_memchr(s, c, strlen(s));
}
