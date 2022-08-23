/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** match
*/

//int match(const char *s1, const char *s2)
//{
//    if (*s2 == '*') {
//        return match(s1, s2 + 1) || *s1 == '\0' && match(s1 + 1, s2);
//    }
//    if (*s1 != *s2) {
//        return false;
//    }
//    if (*s1 == '\0') {
//        return true;
//    }
//    return match(s1 + 1, s2 + 1);
//}

int match(const char *s1, const char *s2)
{
    return (*s2 == '*' && (match(s1, s2 + 1) || (*s1 && match(s1 + 1, s2)))) ||
        (*s1 == *s2 && (*s1 == '\0' || match(s1 + 1, s2 + 1)));
}
