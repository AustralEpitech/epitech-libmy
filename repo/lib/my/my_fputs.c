/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_fputs
*/

#include <unistd.h>
#include "my.h"

int my_fputs(int fildes, char const *s)
{
    return write(fildes, s, my_strlen(s));
}
