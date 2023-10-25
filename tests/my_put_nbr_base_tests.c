/*
** EPITECH PROJECT, 2023
** TEST_NBR_BASE
** File description:
** nbr test
*/

#include "../my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_put_nbr_base, is_defined)
{
    return;
}

Test(my_put_nbr_base, show_nbr)
{
    cr_redirect_stdout();
    my_put_nbr_base(348, "hexa");
    cr_assert_stdout_eq_str("348");
}

Test(my_put_nbr_base, show_rest)
{
    cr_redirect_stdout();
    my_put_nbr_base(347547, "hexadecimal");
    cr_assert_stdout_eq_str("11");
}
