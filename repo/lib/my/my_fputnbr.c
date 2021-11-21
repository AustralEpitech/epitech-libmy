/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_fputnbr
*/

#include "my.h"

int my_fputnbr(int fildes, int nb)
{
    return my_fputnbr_base(fildes, nb, "0123456789");
}
