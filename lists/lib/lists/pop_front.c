/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** pop_front
*/

#include <stdlib.h>

#include "lists.h"

void *list_pop_front(void *h, void (*del)(void *h))
{
    list_t *lh = NULL;

    if (h) {
        lh = ((list_t *)h)->next;
        if (del) {
            del(h);
        }
        free(h);
    }
    return lh;
}
