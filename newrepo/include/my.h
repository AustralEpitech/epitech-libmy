/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_getnbr(char const *str);
int my_char_isnum(char c);
int my_is_prime(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_printf(char const *format, ...);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strdup(char *str);
char *my_revstr(char *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char *my_strstr(char *str, char const *to_find);
void my_swap(int *a, int *b);
char **my_str_to_word_array(char *str, char sep, char skip);

#endif /* MY_H_ */