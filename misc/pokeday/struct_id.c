/*
** EPITECH PROJECT, 2020
** pokeday
** File description:
** struct_id
*/

#include <stdlib.h>
#include "my.h"
#include "s_id.h"

struct s_id *new_id(char *name, char *type, int lvl, int hp)
{
    struct s_id *id;

    id = malloc (sizeof (struct s_id));
    id->name = my_strdup(name);
    id->type = my_strdup(type);
    id->lvl = lvl;
    id->hp = hp;
    return (id);
}

void print05(struct s_id *pokemon)
{
    my_putstr("Name: ");
    my_putstr(pokemon->name);
    my_putstr("\ntype: ");
    my_putstr(pokemon->type);
    my_putstr("\nlvl: ");
    my_put_nbr(pokemon->lvl);
    my_putstr("\nhp: ");
    my_put_nbr(pokemon->hp);
    my_putchar('\n');
}