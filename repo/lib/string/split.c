/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** split
*/

#include <stdlib.h>
#include "my_string.h"

char **split(const char *str, const char *delim)
{
    char *s = my_strdup(str + my_strspn(str, delim));
    char **arr = malloc((my_strlen(s) + 1) * sizeof *arr);

    if (!s || !(*s) || !arr) {
        free(s);
        free(arr);
        return NULL;
    }
    *arr = my_strtok(s, delim);
    for (size_t i = 0; arr[i]; i++) {
        arr[i + 1] = my_strtok(NULL, delim);
    }
    return arr;
}
