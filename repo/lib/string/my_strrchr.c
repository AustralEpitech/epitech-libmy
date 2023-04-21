/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strrchr
*/

#include "my_string.h"

char *my_strrchr(const char *s, int c)
{
    return my_memrchr(s, c, strlen(s));
}
