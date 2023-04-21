/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** merge
*/

#include "lists.h"

void *slist_merge(void *h, const void *h2, size_t s)
{
    ((list_t *)list_back(h))->next = slist_copy(h2, s);
    return h;
}
