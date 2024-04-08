/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** clear
*/

#include "lists.h"

void list_clear(void *h, void (*del)(void *h))
{
    for (list_t *el = h; el; el = el->next) {
        list_pop_front(el, del);
    }
}
