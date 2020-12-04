/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strstr
*/

int my_strlen(char const *str);

static int check(char *str, int index, char const *to_find)
{
    int test = 1;

    for (int i = 0; to_find[i] != '\0' && test == 1; i++) {
        if (str[index + i] != to_find[i])
            test = 0;
    }
    return (test);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int test = 0;
    int to_findlen = my_strlen(to_find);

    for (int len = my_strlen(str); i < len - 1 && test == 0; i++) {
        if (str[i] == to_find[0] && len - i >= to_findlen)
            test = check(str, i, to_find);
    }
    if (test)
        return (&str[i - 1]);
    else
        return (0);
}