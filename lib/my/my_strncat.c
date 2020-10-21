/*
** EPITECH PROJECT, 2020
** cpool07
** File description:
** my_strncat
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest);
    int i;

    for (i = 0; i < len && i < nb; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return (dest);
}