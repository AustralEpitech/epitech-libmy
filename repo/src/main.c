/*
** EPITECH PROJECT, {{YEAR}}
** {{PROJ}}
** File description:
** main
*/

#include "my_stdio.h"
#include "my_string.h"

int main(int argc, char *argv[])
{
    my_printf("argc = %d\n", argc);
    FOREACH(arg, argv) {
        my_printf("%s\n", arg);
    }
    return 0;
}
