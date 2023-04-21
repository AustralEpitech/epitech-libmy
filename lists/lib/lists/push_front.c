/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** push_front
*/

#include <stdlib.h>
#include <string.h>

#include "lists.h"

void *slist_push_front(void *h, const void *el, size_t s)
{
    list_t *new_el= malloc(s);

    if (!new_el) {
        return NULL;
    }
    memcpy(new_el, el, s);
    new_el->next = h;
    return new_el;
}
