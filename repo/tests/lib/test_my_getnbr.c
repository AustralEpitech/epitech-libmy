/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** test_my_getnbr
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#include "my.h"

Test(atoi, ten)
{
    char nptr[] = "10";

    cr_assert_eq(my_getnbr(nptr), atoi(nptr));
}

Test(atoi, zero_one)
{
    char nptr[] = "01";

    cr_assert_eq(my_getnbr(nptr), atoi(nptr));
}

Test(atoi, zero)
{
    char nptr[] = "0";

    cr_assert_eq(my_getnbr(nptr), atoi(nptr));
}

Test(atoi, empty)
{
    char nptr[] = "";

    cr_assert_eq(my_getnbr(nptr), atoi(nptr));
}
