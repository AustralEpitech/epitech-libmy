/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_stdio
*/

#ifndef MY_STDIO_H
    #define MY_STDIO_H

    #include <stdarg.h>
    #include <stdio.h>
    #include <unistd.h>

int my_fprintf(int fildes, const char *format, ...);
int my_fputc(int fildes, int c);
int my_fputs(int fildes, const char *s);
int my_printf(const char *format, ...);
int my_putchar(int c);
int my_puts(const char *s);
int my_vfprintf(int fildes, const char *format, va_list ap);

#endif /* my_stdio.h */
