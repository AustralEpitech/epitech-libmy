/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_puts
*/

#include <unistd.h>
#include "my.h"

int my_puts(char const *s)
{
    return my_fputs(STDOUT_FILENO, s);
}
