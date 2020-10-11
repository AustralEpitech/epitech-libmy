/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int dest_len = my_strlen(dest);

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (i < dest_len) {
        dest[i] = '\0';
    }
    return (dest);
}