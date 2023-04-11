/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** pop_back
*/

#include <stdlib.h>

#include "slists.h"

void *list_pop_back(void *head)
{
    list_t *lhead = head;

    if (!head || !lhead->next) {
        free(head);
        return NULL;
    }
    while (((list_t *)lhead->next)->next) {
        lhead = lhead->next;
    }
    free(lhead->next);
    lhead->next = NULL;
    return head;
}
