/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strcase
*/

int my_char_isupper(char c);
int my_char_islower(char c);

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (my_char_islower(str[i]))
            str[i] -= 'a' - 'A';
    return (str);
}

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (my_char_isupper - str[i])
            str[i] -= 'A' - 'a';
    return (str);
}