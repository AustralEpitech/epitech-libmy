/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** my_calloc
*/

#include <stdlib.h>
#include "my_string.h"

void *my_calloc(size_t nmemb, size_t size)
{
    size_t allocated = nmemb * size;
    void *mem = malloc(allocated);

    if (mem)
        my_memset(mem, 0, allocated);
    return mem;
}
