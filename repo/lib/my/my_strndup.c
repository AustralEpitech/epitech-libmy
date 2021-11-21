/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strndup
*/

#include <stdlib.h>
#include "my.h"

char *my_strndup(char const *s, size_t n)
{
    char *new = malloc(n * sizeof *new);

    if (!new)
        return NULL;
    return my_memcpy(new, s, n);
}
