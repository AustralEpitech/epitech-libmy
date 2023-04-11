/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** push_front
*/

#include <stdlib.h>

#include "lists.h"
#include "my_string.h"
#include "slists.h"

void *slist_push_front(void *head, const void *elem, size_t s)
{
    list_t *new_elem = malloc(s);

    if (!new_elem) {
        return NULL;
    }
    my_memcpy(new_elem, elem, s);
    new_elem->next = head;
    return new_elem;
}
