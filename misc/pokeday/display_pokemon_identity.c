/*
** EPITECH PROJECT, 2020
** pokeday
** File description:
** display_pokemon_identity
*/

#include "my.h"

void display_pokemon_identity(char *name, int level, int hp)
{
    my_putstr("Name: ");
    my_putstr(name);
    my_putstr("\nLvl: ");
    my_put_nbr(level);
    my_putstr("\nHP: ");
    my_put_nbr(hp);
    my_putchar('\n');
}