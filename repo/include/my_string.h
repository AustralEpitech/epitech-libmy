/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_string
*/

#ifndef MY_STRING_H
    #define MY_STRING_H

    #define ARR_LEN(arr)    (sizeof(arr) / sizeof(*(arr)))

    #include <string.h>

void   *my_memcpy(void *dest, const void *src, size_t n);
void   *my_memset(void *s, int c, size_t n);
char   *my_revstr(char *str);
char  **my_str_to_word_array(const char *str, const char *delim);
char   *my_strcat(char *dest, const char *src);
char   *my_strchr(const char *s, int c);
int     my_strcmp(const char *s1, const char *s2);
char   *my_strcpy(char *dest, const char *src);
size_t  my_strcspn(const char *s, const char *reject);
char   *my_strdup(const char *s);
size_t  my_strlen(const char *s);
char   *my_strncat(char *dest, const char *src, size_t n);
int     my_strncmp(const char *s1, const char *s2, size_t n);
char   *my_strncpy(char *dest, const char *src, size_t n);
char   *my_strndup(const char *s, size_t n);
size_t  my_strnlen(const char *s, size_t maxlen);
char   *my_strrchr(const char *s, int c);
size_t  my_strspn(const char *s, const char *accept);
char   *my_strstr(const char *haystack, const char *needle);
char   *my_strtok(char *str, const char *delim);
char   *my_strtok_r(char *s, const char *delim, char **save_ptr);

#endif /* my_string.h */
