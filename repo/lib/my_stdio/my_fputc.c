/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_fputc
*/

#include <unistd.h>

int my_fputc(int fildes, int c)
{
    return write(fildes, &c, 1);
}
