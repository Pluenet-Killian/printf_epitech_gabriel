/*
** EPITECH PROJECT, 2023
** MY_FLOAT
** File description:
** my_float
*/

#include "my.h"
#include <stdio.h>

void show_my_float(int result, int k)
{
    int rest = 0;
    int i = 0;

    for (i = 6 + k; i > 0; i--) {
        rest = result % my_compute_power_rec(10, i) /
            my_compute_power_rec(10, i - 1);
        my_putchar(rest + '0');
        if (i == 7)
            my_putchar('.');
    }
}

void my_float(double nbr)
{
    int l = 0;
    int r = 0;
    int result = nbr;
    int count = nbr;
    int	m = 10;
    int s = 1;
    int	k = 0;

    result = nbr * 1000000;
    while (l != count) {
        r = count % m;
        s = s * 10;
        m = m * 10;
        k += 1;
        l = r;
    }
    show_my_float(result, k);
}
