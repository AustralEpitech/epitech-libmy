/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** size
*/

#include <stddef.h>

#include "lists.h"

size_t list_size(const void *head)
{
    size_t l = 0;
    const list_t *lhead = head;

    while (lhead) {
        lhead = lhead->next;
        l++;
    }
    return l;
}
