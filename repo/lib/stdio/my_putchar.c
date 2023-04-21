/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_putchar
*/

#include "my_stdio.h"

int my_putchar(int c)
{
    return my_fputc(STDOUT_FILENO, c);
}
