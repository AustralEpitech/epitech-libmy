/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** merge
*/

#include <stdlib.h>
#include <string.h>

#include "lists.h"
#include "slists.h"

void *slist_merge(void *head, const void *head2, size_t s)
{
    list_t *lhead = list_back(head);
    list_t *lhead_bak = lhead;
    const list_t *lhead2 = head2;

    while (head2) {
        lhead->next = malloc(s);
        if (!lhead->next) {
            list_clear(lhead_bak);
            return NULL;
        }
        memcpy(lhead->next, lhead2, s);
        lhead = lhead->next;
    }
    lhead->next = NULL;
    return head;
}
