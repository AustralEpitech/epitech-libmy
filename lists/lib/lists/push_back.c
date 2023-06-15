/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** push_back
*/

#include <stdlib.h>
#include <string.h>

#include "lists.h"

void *slist_push_back(void *h, const void *el, size_t s)
{
    list_t *lh = list_back(h);
    list_t *new_el = malloc(s);

    if (!new_el) {
        return NULL;
    }
    memcpy(new_el, el, s);
    new_el->next = NULL;
    if (!h) {
        return new_el;
    }
    lh->next = new_el;
    return h;
}
