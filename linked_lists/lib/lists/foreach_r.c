/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** foreach_r
*/

#include "lists.h"

void *list_foreach_r(const void *head, const list_t **saveptr)
{
    if (!head) {
        head = *saveptr;
        if (!head) {
            return NULL;
        }
    }
    *saveptr = ((list_t *)head)->next;
    return (void *)head;
}
