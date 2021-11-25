/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(const char *s)
{
    size_t len = my_strlen(s) + 1;
    char *new = malloc(len);

    if (!new)
        return NULL;
    return my_memcpy(new, s, len);
}
