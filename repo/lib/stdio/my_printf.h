/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_printf
*/

#pragma once

#define BUF_SIZE    2048

#include <stddef.h>

typedef struct buf_s {
    char str[BUF_SIZE];
    size_t size;
    size_t written;
} buf_t;
