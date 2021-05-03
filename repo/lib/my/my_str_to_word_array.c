/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

static int is_sep(char const *str, int i, char sep, char skip)
{
    if (str[i++] != sep)
        return 0;
    for (; str[i] == skip; i++);
    return str[i] != sep && str[i];
}

static int my_strlen_sep(char const **str, char sep, char skip)
{
    int size = 0;

    while ((**str == sep || **str == skip))
        (*str)++;
    for (; **str && **str != sep; (*str)++)
        size += **str != skip;
    return size;
}

static int count_words(char const **str, char sep, char skip)
{
    int size = 1;

    while ((**str == sep || **str == skip))
        (*str)++;
    for (int i = 0; (*str)[i]; i++)
        size += is_sep(*str, i, sep, skip);
    return size;
}

static char **init_arr(char const *str, char sep, char skip, int size)
{
    char **arr = NULL;
    int len = 0;

    arr = malloc(sizeof(char *) * (size + 1));
    if (!arr)
        return NULL;
    arr[size] = NULL;
    for (int i = 0; i < size && len != -1; i++) {
        len = my_strlen_sep(&str, sep, skip);
        arr[i] = malloc(len + 1);
        arr[i][len] = 0;
        if (!arr[i])
            len = -1;
    }
    if (len == -1) {
        for (int i = 0; arr[i]; i++)
            free(arr[i]);
        free(arr);
        return NULL;
    }
    return arr;
}

char **my_str_to_word_array(char const *str, char sep, char skip)
{
    char **arr = init_arr(str, sep, skip, count_words(&str, sep, skip));
    int j = 0;

    if (!arr)
        return NULL;
    for (int i = 0; *str; str++)
        if (*str != sep && *str != skip)
            arr[i][j++] = *str;
        else if (is_sep(str, 0, sep, skip)) {
            i++;
            j = 0;
        }
    return arr;
}