/*
** EPITECH PROJECT, 2020
** pokeday
** File description:
** attack_rec
*/

#include "my.h"

void attack_rec(char *name, char *shout, int dmg, int hp)
{
    hp -= dmg;
    if (hp < 0)
        hp = 0;
    my_putstr(name);
    my_putstr(": \"");
    my_putstr(shout);
    my_putstr("\"\n");
    my_put_nbr(dmg);
    my_putstr(" dmg given.\n");
    my_put_nbr(hp);
    my_putstr(" hp left.\n");
    if (hp > 0) {
        attack_rec(name, shout, dmg - dmg / 10, hp);
    }
}