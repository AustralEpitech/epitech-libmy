/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}