/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_sqrt
*/

int my_sqrt(int n)
{
    int p = 0;
    int i = 1;

    for (; p < n; i++)
        p = i * i;
    return p == n ? i - 1 : 0;
}
