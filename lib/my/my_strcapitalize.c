/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strcapitalize
*/

char *my_strlowcase(char *str);

int my_isin(char *str, char c)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (c == str[i])
            return (1);
    }
    return (0);
}

char *my_strcapitalize(char *str)
{
    char char_list[] = " +-";

    my_strlowcase(str);
    if ('a' <= str[0] && str[0] <= 'z')
        str[0] -= 'a' - 'A';
    for (int i = 1; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z' && my_isin(char_list, str[i - 1]))
            str[i] -= 'a' - 'A';
    }
    return (str);
}