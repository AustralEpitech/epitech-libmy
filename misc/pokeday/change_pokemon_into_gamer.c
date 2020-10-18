/*
** EPITECH PROJECT, 2020
** pokeday
** File description:
** change_pokemon_into_gamer
*/

#include "my.h"

char *change_pokemon_into_gamer(char *name)
{
    for (int i = 0; name[i] != '\0'; i++) {
        switch(name[i]){
            case 'a':
                name[i] = '4'; 
                break;
            case 'e':
                name[i] = '3';
                break;
            case 'l':
                name[i] = '1';
                break;
            case 'x':
                name[i] = 'X';
                break;
            default:
                break;
        }
    }
    return (name);
}