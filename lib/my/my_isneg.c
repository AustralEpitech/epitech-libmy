/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_isneg
*/

void my_putchar(char c);

int my_isneg(int nb)
{
    if (nb < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (0);
}