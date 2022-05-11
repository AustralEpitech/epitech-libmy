/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_ctype
*/

#ifndef MY_CTYPE_H
    #define MY_CTYPE_H

    #define ISUPPER(c)  ('A' <= (c) && (c) <= 'Z')
    #define ISLOWER(c)  ('a' <= (c) && (c) <= 'z')
    #define ISALPHA(c)  (ISUPPER(c) || ISLOWER(c))
    #define ISDIGIT(c)  ('0' <= (c) && (c) <= '9')
    #define ISPRINT(c)  (032 <= (c) && (c) <= 127)
    #define ISALNUM(c)  (ISALPHA(c) || ISDIGIT(c))

    #define TOUPPER(c)  ((c) - ('a' + 'A') * ISLOWER(c))
    #define TOLOWER(c)  ((c) - ('A' + 'a') * ISUPPER(c))
    #define TODIGIT(c)  ((c) - ('0'      ) * ISDIGIT(c))

    #include <ctype.h>

#endif /* my_ctype.h */
