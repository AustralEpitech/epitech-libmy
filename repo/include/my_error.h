/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_error
*/

#ifndef MY_ERROR_H
    #define MY_ERROR_H

    #ifndef _GNU_SOURCE
        #define _GNU_SOURCE 1
    #endif

    #include <errno.h>
    #include <error.h>

//void my_error(int status, int errnum, const char *format, ...);
int my_error(int status, int errnum, const char *format, ...);

#endif /* my_error.h */
