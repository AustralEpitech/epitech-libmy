/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_memrchr
*/

#include <stddef.h>

void *memrchr(const void *s, int c, size_t n)
{
    const char *ss = s;
    char *found = (char *)s;

    while (n) {
        found = *ss == c ? (char *)ss : found;
        ss++;
        n--;
    }
    return *found == c ? found : NULL;
}
