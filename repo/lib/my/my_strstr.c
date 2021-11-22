/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strstr
*/

#include "my.h"

char *my_strstr(char const *haystack, char const *needle)
{
    size_t len = my_strlen(needle);

    if (!len)
        return (char *)haystack;
    for (; *haystack; haystack++)
        if (!my_strncmp(haystack, needle, len))
            return (char *)haystack;
    return NULL;
}
