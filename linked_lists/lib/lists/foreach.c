/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** foreach
*/

#include "lists.h"

void *list_foreach(const void *head)
{
    static const list_t *saveptr;

    return list_foreach_r(head, &saveptr);
}
