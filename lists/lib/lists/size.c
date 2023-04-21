/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** size
*/

#include <stddef.h>

#include "lists.h"

size_t list_size(const void *h)
{
    size_t l = 0;
    const list_t *lh = h;

    while (lh) {
        lh = lh->next;
        l++;
    }
    return l;
}
