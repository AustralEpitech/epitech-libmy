/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strtok
*/

#include <stddef.h>

static int is_in(char c, char const *str)
{
    int i = 0;

    while (str[i] && str[i] != c)
        i++;
    return str[i] != '\0';
}

int my_strcspn(char const *s, char const *reject)
{
    int i = 0;

    while (s[i] && !is_in(s[i], reject))
        i++;
    return i;
}

int my_strspn(char const *s, char const *accept)
{
    int i = 0;

    while (s[i] && is_in(s[i], accept))
        i++;
    return i;
}

char *my_strtok_r(char *s, const char *delim, char **save_ptr)
{
    char *end;

    if (!s)
        s = *save_ptr;
    s += my_strspn(s, delim);
    if (!(*s)) {
        *save_ptr = s;
        return NULL;
    }
    end = s + my_strcspn(s, delim);
    if (!(*end)) {
        *save_ptr = end;
        return s;
    }
    *end = '\0';
    *save_ptr = end + 1;
    return s;
}

char *my_strtok(char *s, const char *delim)
{
    static char *olds;
    return my_strtok_r(s, delim, &olds);
}
