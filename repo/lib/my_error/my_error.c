/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_error
*/

#include "my_error.h"
#include <stdlib.h>
#include <string.h>
#include "my_stdio.h"

//void my_error(int status, int errnum, const char *format, ...)
//{
//    va_list ap;
//
//    my_printf("%s: ", program_invocation_name);
//    va_start(ap, format);
//    my_vfprintf(STDERR_FILENO, format, ap);
//    va_end(ap);
//    if (errnum)
//        my_printf(": %s", strerror(errnum));
//    my_printf("\n");
//    exit(status);
//}

int my_error(int status, int errnum, const char *format, ...)
{
    va_list ap;

    (void)errnum;
    my_printf("%s: ", program_invocation_name);
    va_start(ap, format);
    my_vfprintf(STDERR_FILENO, format, ap);
    va_end(ap);
    my_printf("\n");
    return status;
}
