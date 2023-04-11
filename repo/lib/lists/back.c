/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** back
*/

#include "slists.h"

void *list_back(void *head)
{
    list_t *lhead = head;

    if (!lhead) {
        return lhead;
    }
    while (lhead->next) {
        lhead = lhead->next;
    }
    return lhead;
}
