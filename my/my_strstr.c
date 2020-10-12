/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strstr
*/

int check(char *str, int index, char const *to_find)
{
    int i = 1;
    int test = 1;

    while (i < my_strlen(to_find) && test == 1) {
        if (str[index + i] != to_find[i]) {
            test = 0;
        }
        i++;
    }
    return (test);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int test = 0;
    int len = my_strlen(str);

    while (i < len - 1 && test == 0) {
        if (str[i] == to_find[0] && len - i >= my_strlen(to_find)) {
            test = check(str, i, to_find);
        }
        i++;
    }
    if (test) {
        return (&str[i - 1]);
    } else {
        return (0);
    }
}