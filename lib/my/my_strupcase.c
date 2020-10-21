/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strupcase
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] -= 'a' - 'A';
    }
    return (str);
}