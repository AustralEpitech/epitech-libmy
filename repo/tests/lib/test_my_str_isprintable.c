/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_str_isprintable
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_str_isprintable, printable)
{
    cr_assert_eq(my_str_isprintable("03#$%^&(*17fhdjsl78rhGFSG89"), 1);
}

Test(my_str_isprintable, not_printable)
{
    cr_assert_eq(my_str_isprintable("012\n3456789h"), 0);
}
