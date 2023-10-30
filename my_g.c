/*
** EPITECH PROJECT, 2023
** MY_G
** File description:
** my_g
*/

#include <stdio.h>
#include "my.h"

static long int rounded_nbr_float(double nbr, int getnbr, int count, long int result)
{
    long int rest = result / my_compute_power_rec(10, getnbr - 1);

    if (rest % 10 >= 5)
        result = result + my_compute_power_rec(10, getnbr);
    return result;
}

long int r_n_expo(double nbr, int getnbr, int count, long int result)
{
    long int rest = result / my_compute_power_rec(10, getnbr - 1);

    if (rest % 10 >= 5)
        result = result + my_compute_power_rec(10, getnbr);
    return result;
}

static void show_g_expo(int count, int getnbr, long int result)
{
    int i = 0;
    long int rest = 0;

    for (i = 0; i < getnbr; i++) {
	rest = result % my_compute_power_rec(10, getnbr + count - i) /
            my_compute_power_rec(10, getnbr + count - i - 1);
        my_putchar(rest + '0');
	if (i == getnbr - 1) {
            my_putstr("e+");
            my_putchar('0');
            my_put_nbr(count - 1);
	}
        if (i == 0 && getnbr > 1)
            my_putchar('.');
    }
    my_putchar('\n');
}

static void show_g_float(int count, int getnbr, long int result)
{
    int i = 0;
    long int rest = 0;

    for (i = 0; i < getnbr; i++) {
        rest = result % my_compute_power_rec(10, getnbr + count - i - 1) /
               my_compute_power_rec(10, getnbr + count - i - 2);
        my_putchar(rest + '0');
        if (i == count - 1 && i != getnbr - 1) {
            my_putchar('.');
        }
    }
}

static void cond_my_g(double nbr, int count, int getnbr, long int result)
{
    if (count > getnbr) {
        result = r_n_expo(nbr, count, getnbr, result);
        show_g_expo(count, getnbr, result);
    } else {
        result = rounded_nbr_float(nbr, count, getnbr, result) / 10;
        show_g_float(count, getnbr, result);
    }
}

int my_g(char const *str, double nbr)
{
    int count = 0;
    int part_entiere = (int)nbr;
    int first_part = (int)nbr;
    long int result = 0;
    int getnbr = my_getnbr(str);
    double temp;

    if (str[0] == '\0')
        getnbr = 6;
    while (part_entiere != 0) {
	part_entiere = part_entiere / 10;
	count += 1;
    }
    result = nbr * my_compute_power_rec(10, getnbr);
    cond_my_g(nbr, count, getnbr, result);
    return count + getnbr;
}
