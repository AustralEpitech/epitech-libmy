/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_put_nbr
*/

int my_put_nbr(int nb)
{
<<<<<<< HEAD
    char c;
    char str[];

    for (int i = 0; nb > 0; i++) {
        c = nb % 10 + '0';
        str[i] = c;
        nb /= 10;
    }
    my_putstr(str);
    return (0);
}

int main()
{
    int nb = 123;
    my_put_nbr(nb);
=======
    int nbr = nb;
    int i;

    for (i = 0; nbr > 10; i++)
        nbr /= 10;
    my_putchar('0' + nbr);
    if (nbr != nb)
        my_put_nbr(nb - nbr * 10 * i);
>>>>>>> db8d825ef3794a071a172db5ef9ec93bca14a75c
}