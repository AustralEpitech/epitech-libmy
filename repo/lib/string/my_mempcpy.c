/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_mempcpy
*/

#include "my_string.h"

void *my_mempcpy(void *dest, const void *src, size_t n)
{
    return (void *)((size_t)my_memcpy(dest, src, n) + n);
}
