/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_fputc
*/

#include <unistd.h>

int my_fputc(int fildes, int c)
{
    return write(fildes, &c, 1);
}
