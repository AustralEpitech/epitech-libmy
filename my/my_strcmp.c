/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int len = my_strlen(s1);
    int len1 = my_strlen(s2);
    int diff;

    if (len1 > len) {
        len = len1;
    }
    for (int i = 0; i < len; i++) {
        diff = s1[i] - s2[i];
        if (diff != 0) {
            return (diff);
        }
    }
    return (0);
}