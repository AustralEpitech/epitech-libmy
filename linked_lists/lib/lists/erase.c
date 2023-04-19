/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** erase
*/

#include <stdlib.h>

#include "lists.h"

void *list_erase(void *head, size_t pos)
{
    list_t *lhead = list_at(head, pos - 1);
    list_t *tmp;

    if (lhead && lhead->next) {
        tmp = ((list_t *)lhead->next)->next;
        free(lhead->next);
        lhead->next = tmp;
    }
    return head;
}
