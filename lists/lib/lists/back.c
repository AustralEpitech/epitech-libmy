/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** back
*/

#include "lists.h"

void *list_back(const void *h)
{
    list_t *lh = h;

    if (!lh) {
        return lh;
    }
    while (lh->next) {
        lh = lh->next;
    }
    return (void *)lh;
}
