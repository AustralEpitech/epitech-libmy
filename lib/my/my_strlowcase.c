/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] -= 'A' - 'a';
    }
    return (str);
}