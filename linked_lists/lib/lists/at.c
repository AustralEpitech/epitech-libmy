/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** at
*/

#include <stddef.h>

#include "lists.h"

void *list_at(void *head, size_t pos)
{
    list_t *lhead = head;

    for (size_t i = 0; i < pos && lhead; i++) {
        lhead = lhead->next;
    }
    return lhead;
}
