/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_str
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i;

    for (i = 0; i < len; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return (dest);
}

int my_strcmp(char const *s1, char const *s2)
{
    int len = my_strlen(s1);
    int len1 = my_strlen(s2);
    int diff;

    if (len1 > len)
        len = len1;
    for (int i = 0; i < len; i++) {
        diff = s1[i] - s2[i];
        if (diff != 0)
            return (diff);
    }
    return (0);
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char *my_revstr(char *str)
{
    char c;
    int len = my_strlen(str) - 1;

    for (int i = 0; i < (len + 1) / 2; i++) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
    }
    return (str);
}