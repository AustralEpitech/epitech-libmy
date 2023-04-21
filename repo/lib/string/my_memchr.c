/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_memchr
*/

#include <stddef.h>

void *memchr(const void *s, int c, size_t n)
{
    const char *ss = s;

    while (*ss != c && n) {
        ss++;
        n--;
    }
    return *ss == c ? (char *)ss : NULL;
}
