/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** insert
*/

#include <stdlib.h>
#include <string.h>

#include "lists.h"

void *slist_insert(void *h, size_t pos, const void *el, size_t s)
{
    list_t *lh = list_at(h, pos - 1);
    list_t *tmp;

    if (!lh) {
        return NULL;
    }
    tmp = lh->next;
    lh->next = malloc(s);
    if (!lh->next) {
        lh->next = tmp;
        return NULL;
    }
    memcpy(lh->next, el, s);
    lh->next = tmp;
    return h;
}
