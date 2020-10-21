/*
** EPITECH PROJECT, 2020
** cpool07
** File description:
** my_strcat
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i;

    for (i = 0; i < len; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return (dest);
}