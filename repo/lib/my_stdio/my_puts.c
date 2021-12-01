/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_puts
*/

#include "my_stdio.h"

int my_puts(const char *s)
{
    return my_fputs(STDOUT_FILENO, s);
}
