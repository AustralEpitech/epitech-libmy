/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** erase
*/

#include <stdlib.h>

#include "lists.h"

void *list_erase(void *h, size_t pos, void (*del)(void *h))
{
    list_t *lh = list_at(h, pos - 1);

    if (lh) {
        lh->next = list_pop_front(lh->next, del);
    }
    return h;
}
