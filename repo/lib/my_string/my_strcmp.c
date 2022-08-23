/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strcmp
*/

int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 == *s2 && *s1) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

//int my_strcmp(const char *s1, const char *s2)
//{
//    return *s1 == *s2 && (*s1 == '\0' my_strcmp(s1 + 1, s2 + 1));
//}
