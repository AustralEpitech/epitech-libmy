/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strtok_r
*/

#include "my_string.h"

char *my_strtok_r(char *str, const char *delim, char **save_ptr)
{
    char *end;

    if (!str) {
        str = *save_ptr;
    }
    str += my_strspn(str, delim);
    if (*str == '\0') {
        *save_ptr = str;
        return NULL;
    }
    end = str + my_strcspn(str, delim);
    if (*end == '\0') {
        *save_ptr = end;
        return str;
    }
    *end = '\0';
    *save_ptr = end + 1;
    return str;
}
