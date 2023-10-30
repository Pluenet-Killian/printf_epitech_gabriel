/*
** EPITECH PROJECT, 2023
** MAIN
** File description:
** main
*/

#include "mini_printf.h"
#include "my.h"
#include "flags.h"
#include <stdio.h>

int main(void)
{
    double nbr = 44.79;
    my_g("4", nbr);
    printf("\n%.4g\n", nbr);
    return 0;
}
