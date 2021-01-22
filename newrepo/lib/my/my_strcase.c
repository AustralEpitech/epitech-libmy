/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] -= 'A' - 'a';
    return (str);
}

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] -= 'a' - 'A';
    return (str);
}