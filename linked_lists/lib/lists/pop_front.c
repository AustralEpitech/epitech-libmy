/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** pop_front
*/

#include <stdlib.h>

#include "lists.h"

void *list_pop_front(void *head)
{
    list_t *lhead;

    if (!head) {
        return head;
    }
    lhead = ((list_t *)head)->next;
    free(head);
    return lhead;
}
