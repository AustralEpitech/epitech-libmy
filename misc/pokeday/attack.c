/*
** EPITECH PROJECT, 2020
** pokeday
** File description:
** attack
*/

void attack(int *hp1, int dmg1, int *hp2, int dmg2)
{
    *hp1 -= dmg2;
    *hp2 -= dmg1;
}