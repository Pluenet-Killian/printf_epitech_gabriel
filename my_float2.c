/*
** EPITECH PROJECT, 2023
** MY_FLOAT
** File description:
** my_float
*/

#include "my.h"
#include <stdio.h>

void show_my_float2(int result, int k, int getnbr)
{
    int rest = 0;
    int i = 0;

    for (i = getnbr + k; i > 0; i--) {
        rest = result % my_compute_power_rec(10, i) /
            my_compute_power_rec(10, i - 1);
        my_putchar(rest + '0');
        if (i == getnbr + 1)
            my_putchar('.');
    }
}

void my_float2(char const *str, double nbr)
{
    int l = 0;
    int r = 0;
    int result = nbr;
    int count = nbr;
    int	m = 10;
    int	k = 0;
    int getnbr = my_getnbr(str);

    if (getnbr != 0)
        result = nbr * my_compute_power_rec(10, getnbr);
    else
        result = nbr * 100000;
    while (l != count) {
        r = count % m;
        m = m * 10;
        k += 1;
        l = r;
    }
    show_my_float2(result, k, getnbr);
}
