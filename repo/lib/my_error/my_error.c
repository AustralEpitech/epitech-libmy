/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_error
*/

#include "my_error.h"
#include <stdlib.h>
#include "my_stdio.h"
#include "my_string.h"

//void my_error(int status, int errnum, const char *format, ...)
//{
//    va_list ap;
//    const char *err;
//
//    my_fprintf(STDERR_FILENO, "%s: ", program_invocation_name);
//    va_start(ap, format);
//    my_vfprintf(STDERR_FILENO, format, ap);
//    va_end(ap);
//    if (errnum) {
//        err = my_strerror(errnum);
//        if (err)
//            my_fprintf(STDERR_FILENO, ": %s", err);
//    }
//    my_fprintf(STDERR_FILENO, "\n");
//    exit(status);
//}

int my_error(int status, int errnum, const char *format, ...)
{
    va_list ap;
    const char *err;

    my_fprintf(STDERR_FILENO, "%s: ", program_invocation_name);
    va_start(ap, format);
    my_vfprintf(STDERR_FILENO, format, ap);
    va_end(ap);
    if (errnum) {
        err = my_strerror(errnum);
        if (err)
            my_fprintf(STDERR_FILENO, ": %s", err);
    }
    my_fprintf(STDERR_FILENO, "\n");
    return status;
}
