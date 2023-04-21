/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** foreach
*/

#include "lists.h"

void *list_foreach(const void *h)
{
    static const list_t *sptr;

    return list_foreach_r(h, &sptr);
}
