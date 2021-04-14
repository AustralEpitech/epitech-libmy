/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

static int is_sep(char c, char next, char sep, char skip)
{
    return c == sep && next != sep;
}

static int my_strlen_sep(char *str, char sep, char skip)
{
    int count = 0;
    int i = 0;

    for (; str[i] && str[i] != sep; i++)
        if (str[i] != skip)
            count++;
    return count;
}

static char **end_str(char **sstr, int i, int j)
{
    sstr[i][j] = 0;
    sstr[++i] = NULL;
    return sstr;
}

char **my_str_to_word_array(char *str, char sep, char skip)
{
    char **sstr = NULL;
    int count = 1;
    int i = 0;
    int j = 0;

    for (int index = 0; str[index]; index++)
        if (is_sep(str[index], str[index + 1], sep, skip))
            count++;
    sstr = malloc(sizeof(char *) * (count + 1));
    sstr[0] = malloc(my_strlen_sep(str, sep, skip) + 1);
    for (int index = 0; str[index]; index++) {
        if (str[index] != skip && str[index] != sep)
            sstr[i][j++] = str[index];
        else if (is_sep(str[index], str[index + 1], sep, skip)) {
            sstr[i++][j] = 0;
            j = 0;
            sstr[i] = malloc(my_strlen_sep(str + index + 1, sep, skip) + 1);
        }
    }
    return end_str(sstr, i, j);
}