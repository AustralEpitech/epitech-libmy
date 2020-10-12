/*
** EPITECH PROJECT, 2020
** cpool08
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int my_strlen(char const *);

int my_isalphan(char c)
{
    if (('A' <= c && c <= 'Z') ||
    ('a' <= c && c <= 'z') ||
    ('0' <= c && c <= '9'))
        return (1);
    return (0);
}

int my_count_word(char const *str, int len)
{
    int nbr_w = 0;
    for (int i = 0; i < len; i++) {
        if (!my_isalphan(str[i]))
            nbr_w++;
    }
    return (nbr_w + 1);
}

int my_wordlen(char const *str, int i)
{
    int len = 0;
    int idx = 0;

    for (int counter = 0; counter < i; idx++) {
        if (!my_isalphan(str[idx]))
            counter++;
    }
    for (; my_isalphan(str[idx]); idx++) {
        len++;
    }
    return (len);
}

char **my_str_to_word_array(char const *str)
{
    int len = my_strlen(str);
    int nb_w = my_count_word(str, len);
    char **arr = malloc(sizeof (char *) * (nb_w + 1));
    int word = 0;

    for (int i = 0; i < nb_w; i++)
        arr[i] = malloc(sizeof (char) * (my_wordlen(str, i) + 1));
    for (int i = 0, letter = 0, first_char = 1; i < len; i++) {
        if (my_isalphan(str[i])) {
        arr[word][letter] = str[i];
        letter++;
        first_char = 0;
        } else if (my_isalphan(str[i + 1]) && !first_char) {
            arr[word][letter] = '\0';
            word++;
            letter = 0;
        }
    }
    arr[word + 1] = NULL;
    return (arr);
}