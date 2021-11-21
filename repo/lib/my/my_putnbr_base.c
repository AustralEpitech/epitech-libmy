/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_putnbr_base
*/

#include <unistd.h>
#include "my.h"

int my_putnbr_base(int nb, char *base)
{
    return my_fputnbr_base(STDOUT_FILENO, nb, base);
}
