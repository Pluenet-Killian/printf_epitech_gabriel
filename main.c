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
    double nbr = 355587;
    my_exponent(".3", nbr);
    printf("\n%.3e\n", nbr);
    return 0;
}
