/*
** EPITECH PROJECT, 2020
** cpool07
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return (dest);
}