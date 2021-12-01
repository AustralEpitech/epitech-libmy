/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_putnbr_base
*/

#include "my_stdio.h"

int my_putnbr_base(int nb, char *base)
{
    return my_fputnbr_base(STDOUT_FILENO, nb, base);
}
