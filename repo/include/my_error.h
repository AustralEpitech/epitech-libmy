/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_error
*/

#pragma once
#define _GNU_SOURCE 1   // allow program_invocation_name var

#include <errno.h>
#include <error.h>

//void my_error(int status, int errnum, const char *format, ...);
int my_error(int status, int errnum, const char *format, ...);
