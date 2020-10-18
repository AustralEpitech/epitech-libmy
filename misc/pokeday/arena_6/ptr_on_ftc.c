/*
** EPITECH PROJECT, 2020
** pokeday
** File description:
** ptr_on_ftc
*/

#include <stdlib.h>
#include "struct.h"

struct id_card *new_id(char *infos[], int *stats)
{
    struct id_card *pokemon;

    pokemon = malloc(sizeof (struct id_card));
    pokemon->name = infos[0];
    pokemon->type = infos[1];
    pokemon->shout = infos[2];
    pokemon->lvl = stats[0];
    pokemon->hp = stats[1];
    pokemon->dmg = stats[2];
    return (pokemon);
}