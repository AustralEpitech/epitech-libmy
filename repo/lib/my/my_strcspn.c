/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strcspn
*/

#include "my.h"

size_t my_strcspn(char const *s, char const *reject)
{
    size_t i = 0;

    while (s[i] && !my_strchr(reject, s[i]))
        i++;
    return i;
}
