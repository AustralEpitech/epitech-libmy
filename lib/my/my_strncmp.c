/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strncmp
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int len = my_strlen(s1);
    int len1 = my_strlen(s2);
    int diff;

    if (len1 > len)
        len = len1;
    if (n < len)
        len = n;
    for (int i = 0; i < len; i++) {
        diff = s1[i] - s2[i];
        if (diff != 0)
            return (diff);
    }
    return (0);
}