/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** clear
*/

#include <stdlib.h>

#include "slists.h"

void list_clear(void *head)
{
    for (list_t *lhead = head; lhead; lhead = head) {
        head = lhead->next;
        free(lhead);
    }
}
