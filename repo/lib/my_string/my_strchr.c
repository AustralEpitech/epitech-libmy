/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strchr
*/

char *my_strchr(const char *s, int c)
{
    while (*s != c && *s) {
        s++;
    }
    return *s == c ? (char *)s : (char *)0;
}
