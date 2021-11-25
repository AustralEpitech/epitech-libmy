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
int     my_fprintf(int fildes, const char *format, ...);
int     my_fputc(int fildes, int c);
int     my_fputnbr(int fildes, int nb);
int     my_fputnbr_base(int fildes, int nb, char *base);
int     my_fputs(int fildes, const char *s);
int     my_printf(const char *format, ...);
int     my_putchar(int c);
int     my_putnbr(int nb);
int     my_putnbr_base(int nb, char *base);
int     my_puts(const char *s);
int     my_vfprintf(int fildes, const char *format, va_list ap);

// stdlib
int     my_atoi(const char *nptr);

// string
void    *my_memcpy(void *dest, const void *src, size_t n);
void    *my_memset(void *s, int c, size_t n);
char    *my_revstr(char *str);
char    *my_strcat(char *dest, const char *src);
char    *my_strchr(const char *s, int c);
int     my_strcmp(const char *s1, const char *s2);
char    *my_strcpy(char *dest, const char *src);
size_t  my_strcspn(const char *s, const char *reject);
char    *my_strdup(const char *s);
size_t  my_strlen(const char *s);
char    *my_strncat(char *dest, const char *src, size_t n);
int     my_strncmp(const char *s1, const char *s2, size_t n);
char    *my_strncpy(char *dest, const char *src, size_t n);
char    *my_strndup(const char *s, size_t n);
size_t  my_strnlen(const char *s, size_t maxlen);
size_t  my_strspn(const char *s, const char *accept);
char    *my_strstr(const char *haystack, const char *needle);
char    *my_strtok(char *str, const char *delim);
char    *my_strtok_r(char *s, const char *delim, char **save_ptr);

#endif /* !MY_H_ */
