/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** at
*/

#include <stddef.h>

#include "lists.h"

void *list_at(const void *h, size_t pos)
{
    list_t *lh = h;

    for (size_t i = 0; i < pos && lh; i++) {
        lh = lh->next;
    }
    return (void *)lh;
}
