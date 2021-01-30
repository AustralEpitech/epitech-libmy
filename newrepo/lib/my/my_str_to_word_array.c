/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

static int my_strlen_sep(char *str, char sep)
{
    int i = 0;

    for (; str[i] && str[i] != sep; i++);
    return (i);
}

char **my_str_to_word_array(char *str, char sep)
{
    char **sstr = NULL;
    int count = 1;
    int i = 0;

    for (int index = 0; str[index]; index++)
        if (str[index] == sep)
            count++;
    sstr = malloc(sizeof(char *) * (count + 1));
    for (int j = 0, index = 0; i < count; i++, j = 0, index++) {
        sstr[i] = malloc(my_strlen_sep(str + index, sep) + 1);
        for (; str[index] && str[index] != sep; index++, j++)
            sstr[i][j] = str[index];
        sstr[i][j] = 0;
    }
    sstr[i] = NULL;
    return (sstr);
}