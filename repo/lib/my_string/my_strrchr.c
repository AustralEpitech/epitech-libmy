/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strrchr
*/

#include <stddef.h>

char *my_strrchr(const char *s, int c)
{
    char *found = (char *)s;

    while (*s) {
        found = *s == c ? (char *)s : found;
        s++;
    }
    return *found == c ? found : NULL;
}
