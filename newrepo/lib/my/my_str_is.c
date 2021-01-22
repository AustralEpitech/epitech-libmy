/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_is
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!('A' <= str[i] && str[i] <= 'Z' || 'a' <= str[i] && str[i] <= 'z'))
            return (0);
    return (1);
}

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++)
        if ('a' >= str[i] || str[i] >= 'z')
            return (0);
    return (1);
}

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    while (str[i++])
        if (!('0' <= str[i] && str[i] <= '9'))
            return (0);
    return (1);
}

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (' ' >= str[i] || str[i] >= '~')
            return (0);
    return (1);
}

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++)
        if ('A' >= str[i] || str[i] <= 'Z')
            return (0);
    return (1);
}