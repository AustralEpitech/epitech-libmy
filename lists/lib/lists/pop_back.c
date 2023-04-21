/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** pop_back
*/

#include <stdlib.h>

#include "lists.h"

void *list_pop_back(void *h, void (*del)(void *h))

{
    list_t *lh = h;

    if (!h || !lh->next) {
        return list_pop_front(h, del);
    }
    while (((list_t *)lh->next)->next) {
        lh = lh->next;
    }
    lh->next = list_pop_front(lh->next, del);
    free(lh->next);
    lh->next = NULL;
    return h;
}
