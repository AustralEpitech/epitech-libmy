/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** clear
*/

#include <stdlib.h>

#include "lists.h"

void list_clear(void *head)
{
    LIST_FOREACH(l, head) {
        free(l);
    }
}
