/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** insert
*/

#include <stdlib.h>
#include <string.h>

#include "lists.h"

void *slist_insert(void *head, size_t pos, const void *elem, size_t s)
{
    list_t *lhead = list_at(head, pos - 1);
    list_t *tmp;

    if (!lhead) {
        return NULL;
    }
    tmp = lhead->next;
    lhead->next = malloc(s);
    if (!lhead->next) {
        lhead->next = tmp;
        return NULL;
    }
    memcpy(lhead->next, elem, s);
    lhead->next = tmp;
    return head;
}
