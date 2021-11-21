/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_putnbr
*/

#include <unistd.h>
#include "my.h"

int my_putnbr(int nb)
{
    return my_fputnbr(STDOUT_FILENO, nb);
}
