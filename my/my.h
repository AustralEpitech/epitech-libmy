/*
** EPITECH PROJECT, 2020
** cpool09
** File description:
** my
*/

#ifndef MY_H_
#define ABS(value) value < 0 ? -value : value
#define MY_H_

int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_find_prime_sup(int);
int my_getnbr (char *);
int my_is_prime(int);
int my_isneg(int);
int my_put_nbr(int);
void my_putchar(char);
int my_putstr(char *);
char *my_revstr(char *);
int my_showmem(char *, int);
int my_showstr(char *);
void my_sort_int_array(int *, int);
int my_str_isalpha (char *);
int my_str_islower(char *);
int my_str_isnum(char *);
int my_str_isprintable(char *);
int my_str_isupper(char *);
char *my_strcapitalize(char *);
char *my_strcat(char *, char *);
int my_strcmp(char *, char *);
char *my_strcpy(char *, char *);
char *my_strdup(char *);
int my_strlen(char *);
char *my_strlowcase(char *);
char *my_strncat(char *, char *, int);
int my_strncmp(char *, char *, int);
char *my_strncpy(char *, char *, int);
char *my_strstr(char *, char *);
char *my_strupcase(char *);
void my_swap(int *, int *);

#endif /* MY_H_ */