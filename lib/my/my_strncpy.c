/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return (dest);
}