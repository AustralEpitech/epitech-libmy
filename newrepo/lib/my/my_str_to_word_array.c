/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

static int my_strlen_sep(char *str, char sep, char skip)
{
    int count = 0;

    for (int i = 0; str[i] && str[i] != sep; i++)
        if (str[i] != skip)
            count++;
    return (count);
}

char **my_str_to_word_array(char *str, char sep, char skip)
{
    char **sstr = NULL;
    int count = 1;
    int i = 0;

    for (int index = 0; str[index]; index++)
        if (str[index] == sep)
            count++;
    sstr = malloc(sizeof(char *) * (count + 1));
    sstr[0] = malloc(my_strlen_sep(str, sep, skip));
    for (int j = 0, index = 0; str[index]; index++) {
        if (str[index] == sep) {
            sstr[i++][j] = 0;
            j = 0;
            sstr[i] = malloc(my_strlen_sep(str + index, sep, skip) + 1);
        } else if (str[index] != skip)
            sstr[i][j++] = str[index];
    }
    sstr[++i] = NULL;
    return (sstr);
}