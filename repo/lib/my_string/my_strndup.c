/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strndup
*/

#include <stdlib.h>
#include "my_string.h"

char *my_strndup(const char *s, size_t n)
{
    size_t len = my_strnlen(s, n);
    char *new = malloc(len + 1);

    if (!new) {
        return NULL;
    }
    new[len] = '\0';
    return my_memcpy(new, s, len);
}
