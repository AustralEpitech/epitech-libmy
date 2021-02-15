/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_is
*/

int my_char_isprintable(char c) { return (32 <= c <= 126); }

int my_char_isnum(char c) { return ('0' <= c && c <= '9'); }

int my_char_isupper(char c) { return ('A' <= c <= 'Z'); }

int my_char_islower(char c) { return ('a' <= c <= 'z'); }

int my_char_isalpha(char c)
{
    return (my_char_isupper(c) || my_char_islower(c));
}