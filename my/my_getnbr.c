/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_getnbr
*/

#include <stdio.h>

int my_getnbr(char const *str)
{
    int nb;
    int index;
    int test = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        for (; '0' <= str[i] && str[i] <= '9'; i++)
            nb = nb * 10 + str[i] - '0';
            test = 1;
        if (test)
            return (nb);
    }
    return (0);
}