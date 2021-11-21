/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdarg.h>
    #include <stddef.h>

////////////
// Macros //
////////////

// Char

    #define ISUPPER(c)  ('A' <= (c) && (c) <= 'Z')
    #define ISLOWER(c)  ('a' <= (c) && (c) <= 'z')
    #define ISALPHA(c)  (ISUPPER(c) || ISLOWER(c))
    #define ISDIGIT(c)  ('0' <= (c) && (c) <= '9')
    #define ISPRINT(c)  (032 <= (c) && (c) <= 127)
    #define ISALNUM(c)  (ISALPHA(c) || ISDIGIT(c))

    #define TOUPPER(c)  (ISLOWER(c) ? (c) - 'a' + 'A' : (c))
    #define TOLOWER(c)  (ISUPPER(c) ? (c) - 'A' + 'a' : (c))
    #define TODIGIT(c)  (ISDIGIT(c) ? (c) - '0' : (c))

// Maths

    #define ABS(n)      ((n) < 0 ? -(n) : (n))
    #define FLOOR(n)    ((int)(n))
    #define CEIL(n)     ((int)((n) + 1))

///////////////
// Functions //
///////////////

// math
int     my_pow(int n, int p);
int     my_sqrt(int n);

// stdio
int     my_fprintf(int fildes, char const *format, ...);
int     my_fputc(int fildes, int c);
int     my_fputnbr(int fildes, int nb);
int     my_fputnbr_base(int fildes, int nb, char *base);
int     my_fputs(int fildes, char const *s);
int     my_printf(char const *format, ...);
int     my_putchar(int c);
int     my_putnbr(int nb);
int     my_putnbr_base(int nb, char *base);
int     my_puts(char const *s);
int     my_vfprintf(int fildes, char const *format, va_list ap);

// stdlib
int     my_atoi(char const *nptr);

// string
void    *my_memcpy(void *dest, void const *src, size_t n);
void    *my_memset(void *s, int c, size_t n);
char    *my_revstr(char *str);
char    *my_strcat(char *dest, char const *src);
char    *my_strchr(char const *s, int c);
int     my_strcmp(char const *s1, char const *s2);
char    *my_strcpy(char *dest, char const *src);
size_t  my_strcspn(char const *s, char const *reject);
char    *my_strdup(char const *s);
size_t  my_strlen(char const *s);
char    *strncat(char *dest, char const *src, size_t n);
int     my_strncmp(char const *s1, char const *s2, size_t n);
char    *my_strncpy(char *dest, char const *src, size_t n);
char    *my_strndup(char const *s, size_t n);
size_t  my_strnlen(char const *s, size_t maxlen);
size_t  my_strspn(char const *s, char const *accept);
char    *my_strstr(char const *haystack, char const *needle);
char    *my_strtok(char *str, const char *delim);
char    *my_strtok_r(char *s, const char *delim, char **save_ptr);

#endif /* !MY_H_ */
