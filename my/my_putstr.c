/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_putstr
*/

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}