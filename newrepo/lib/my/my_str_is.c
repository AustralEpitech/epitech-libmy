/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str_is
*/

int my_char_isprintable(char c);
int my_char_isnum(char c);
int my_char_isupper(char c);
int my_char_islower(char c);
int my_char_isalpha(char c);

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!my_char_isprintable(str[i]))
            return (0);
    return (1);
}

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    while (str[i++])
        if (!my_char_isnum(str[i]))
            return (0);
    return (1);
}

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!my_char_isupper(str[i]))
            return (0);
    return (1);
}

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!my_char_islower(str[i]))
            return (0);
    return (1);
}

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!my_char_isalpha(str[i]))
            return (0);
    return (1);
}