/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_fputs
*/

#include "my_stdio.h"
#include "my_string.h"

int my_fputs(int fildes, const char *s)
{
    return write(fildes, s, my_strlen(s));
}
