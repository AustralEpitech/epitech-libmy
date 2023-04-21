/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** erase_if
*/

#include <stdlib.h>

#include "lists.h"

void *list_erase_if(void *h, int (*cmp)(void *el), void (*del)(void *h))
{
    while (h && cmp(h)) {
        h = list_pop_front(h, del);
    }
    for (list_t *el = h; el; el = el->next) {
        if (cmp(el->next)) {
            el->next = list_pop_front(el->next, del);
        }
    }
    return h;
}
