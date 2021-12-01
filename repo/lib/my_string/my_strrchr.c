/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strrchr
*/

#include <stddef.h>

char *my_strrchr(const char *s, int c)
{
    char *found = (char *)s;

    for (; *s; s++)
        found = *s == c ? (char *)s : found;
    return *found == c ? found : NULL;
}
