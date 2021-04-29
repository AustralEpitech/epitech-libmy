/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

////////////
// Macros //
////////////

// Char

#define ISPRINT(c) (32 <= c && c <= 126)
#define ISNUM(c) ('0' <= c && c <= '9')
#define ISUP(c) ('A' <= c && c <= 'Z')
#define ISLOW(c) ('a' <= c && c <= 'z')
#define ISALPHA(c) (ISUP(c) || ISLOW(c))

// Nb

#define ABS(n) (n < 0 ? -n : n)
#define ROUNDUP(n) ((int)(n + 1))

///////////////
// Functions //
///////////////

// my_compute

int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);

// my_nbr

int my_getnbr(char const *str);
int my_is_prime(int nb);

// my_put

int my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_printf(char const *format, ...);

// my_str_is

int my_str_isprintable(char const *str);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
int my_str_islower(char const *str);
int my_str_isalpha(char const *str);

// my_str_to_word_array

char **my_str_to_word_array(char const *str, char sep, char skip);

// my_str

int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strdup(char const *src);
char *my_revstr(char *str);

// my_strcase

char *my_strupcase(char *str);
char *my_strlowcase(char *str);

// my_strstr

char *my_strstr(char *str, char const *to_find);

#endif /* !MY_H_ */