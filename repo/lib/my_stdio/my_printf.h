/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_printf
*/

#ifndef MY_PRINTF_H
    #define MY_PRINTF_H

    #define BUF_SIZE    2048

    #include <stddef.h>

typedef struct {
    char str[BUF_SIZE];
    size_t size;
    size_t written;
} buf_t;

#endif /* my_printf.h */
