/*
** EPITECH PROJECT, 2023
** MY_FLOAT_TEST
** File description:
** my_float_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "../my.h"

Test(my_float, is_defined)
{
    return ;
}

Test(my_float, show_float_1_0)
{
    double nbr = 1.00;
    cr_redirect_stdout();
    my_float(nbr);
    cr_assert_stdout_eq_str("1.00");
}

Test(my_float, show_float_348.28)
{
    double nbr = 348.28;
    cr_redirect_stdout();
    my_float(nbr);
    cr_assert_stdout_eq_str("");
}
