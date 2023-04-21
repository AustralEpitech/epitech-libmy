/*
** EPITECH PROJECT, 2023
** liblists
** File description:
** copy
*/

#include <stdlib.h>
#include <string.h>

#include "lists.h"

void *slist_copy(const void *h, size_t s)
{
    list_t *lh = malloc(s);
    list_t *lh_bak = lh;

    memcpy(lh, h, s);
    for (const list_t *el = h; el; el = el->next) {
        lh->next = malloc(s);
        if (!el->next) {
            list_clear(lh_bak, NULL);
            return NULL;
        }
        memcpy(lh->next, el, s);
        lh = lh->next;
    }
    lh->next = NULL;
    return lh_bak;
}
