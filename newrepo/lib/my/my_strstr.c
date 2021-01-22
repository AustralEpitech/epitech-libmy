/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strstr
*/

int my_strlen(char const *str);

static int check(char *str, int index, char const *to_find)
{
    for (int i = 0; to_find[i]; i++)
        if (str[index + i] != to_find[i])
            return (0);
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int test = 0;
    int to_findlen = my_strlen(to_find);

    for (int i = 0, len = my_strlen(str); str[i - 1] && !test; i++)
        if (str[i] == to_find[0] && len - i >= to_findlen)
            test = check(str, i, to_find);
    return (test);
}