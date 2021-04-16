/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

#define VALID(c) !(c == sep || c == skip)

static int is_sep(char const *str, int i, char sep, char skip)
{
    if (str[i++] != sep)
        return 0;
    for (; str[i] == skip; i++);
    return str[i] != sep && str[i];
}

static int my_strlen_sep(char const *str, char sep, char skip)
{
    int size = 0;

    for (int i = 0; str[i] && str[i] != sep; i++)
        size += !is_sep(str, i, sep, skip);
    return size;
}

static int size_words(char const **str, char sep, char skip)
{
    int size = 0;

    while (!VALID(**str))
        *(*str)++;
    for (int i = 0; (*str)[i]; i++)
        size += is_sep(*str, i, sep, skip);
    return size ? size + 1 : 0;
}

static char **init_arr(char const *str, char sep, char skip, int size)
{
    char **arr = NULL;
    int err = 0;

    arr = malloc(sizeof(char *) * (size + 1));
    if (!arr)
        return NULL;
    arr[size] = NULL;
    for (int i = 0; i < size; i++) {
        arr[i] = malloc(my_strlen_sep(str, sep, skip) + 1);
        if (!arr[i]) {
            err = 1;
            break;
        }
    }
    if (err) {
        for (int i = 0; arr[i]; i++)
            free(arr[i]);
        free(arr);
        return NULL;
    }
    return arr;
}

char **my_str_to_word_array(char const *str, char sep, char skip)
{
    int size = size_words(&str, sep, skip);
    char **arr = NULL;
    int i = 0;
    int j = 0;

    if (!size)
        return NULL;
    arr = init_arr(str, sep, skip, size);
    if (!arr)
        return NULL;
    for (int index = 0; str[index]; index++)
        if (VALID(str[index]))
            arr[i][j++] = str[index];
        else if (is_sep(str, index, sep, skip)) {
            arr[i++][j] = 0;
            j = 0;
        }
    arr[size - 1][j] = 0;
    return arr;
}