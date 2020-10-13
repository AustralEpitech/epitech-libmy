/*
** EPITECH PROJECT, 2020
** cpool07
** File description:
** my_strncat
*/

int my_strlen(char const *);

char *my_strncat(char *dest, char const *src, int n)
{
    int len = my_strlen(dest);
    int i;

    for (i = 0; src[i] != '\0' && i < n; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return (dest);
}