/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include "my_string.h"

char **my_str_to_word_array(const char *str, const char *delim)
{
    char *s = my_strdup(str);
    char **arr = malloc(my_strlen(str) * sizeof *arr);

    if (!s || !arr) {
        free(s);
        free(arr);
        return NULL;
    }
    arr[0] = my_strtok(s, delim);
    for (int i = 0; arr[i]; i++)
        arr[i + 1] = my_strtok(NULL, delim);
    return arr;
}
