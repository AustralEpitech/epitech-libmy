/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_char_isnum
*/

int my_char_isnum(char c, int i)
{
    return ('0' <= c && c <= '9' || c == '-' && i == 0);
}