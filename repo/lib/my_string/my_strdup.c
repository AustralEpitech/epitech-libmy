/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my_string.h"

char *my_strdup(const char *s)
{
    size_t size = my_strlen(s) + 1;
    char *new = malloc(size);

    if (!new)
        return NULL;
    return my_memcpy(new, s, size);
}
