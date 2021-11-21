/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strstr
*/

#include "my.h"

char *my_strstr(char const *haystack, char const *needle)
{
    if (!(*haystack) && !(*needle))
        return (char *)haystack;
    for (; *haystack; haystack++)
        if (!my_strcmp(haystack, needle))
            return (char *)haystack;
    return NULL;
}
