/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strstr
*/

#include "my_string.h"

char *my_strstr(const char *haystack, const char *needle)
{
    size_t len = my_strlen(needle);

    if (!len) {
        return (char *)haystack;
    }
    while (*haystack) {
        if (!my_strncmp(haystack, needle, len)) {
            return (char *)haystack;
        }
        haystack++;
    }
    return NULL;
}
