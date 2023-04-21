/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** foreach_r
*/

#include "lists.h"

void *list_foreach_r(const void *h, const list_t **sptr)
{
    if (!h) {
        h= *sptr;
        if (!h) {
            return NULL;
        }
    }
    *sptr = ((list_t *)h)->next;
    return (void *)h;
}
