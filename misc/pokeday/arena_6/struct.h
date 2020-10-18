/*
** EPITECH PROJECT, 2020
** pokeday
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

struct id_card
{
    // infos
    char *name;
    char *type;
    char *shout;
    // stats
    int lvl;
    int hp;
    int dmg;
};

#endif /* !STRUCT_H_ */