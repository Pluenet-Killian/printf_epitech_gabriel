/*
** EPITECH PROJECT, 2023
** MY_FLOAT
** File description:
** my_float
*/

#include <stdio.h>
#include "my.h"

double rounded_nbr(double nbr, int getnbr, int count)
{
    double temp = nbr * my_compute_power_rec(10, getnbr);
    double rounded_nbr;
    long int int_part = (int)temp;

    if (temp - int_part >= 0.5) {
        int_part += 1;
    }
    rounded_nbr = (double)int_part / my_compute_power_rec(10, count - 1);
    return rounded_nbr;
}

void show_float(int count, int getnbr, long int result)
{
    int i = 0;
    long int rest = 0;
    for (i = count + getnbr; i > 0; i--) {
        rest = result % my_compute_power_rec(10, i + 1) /
            my_compute_power_rec(10, i);
        my_putchar(rest + '0');
	if (i == getnbr + 1 && getnbr != 0)
            my_putchar('.');
    }
}

int my_float(char const *str, double nbr)
{
    int count = 0;
    int part_entiere = (int)nbr;
    int first_part = (int)nbr;
    long int result = 0;
    int getnbr = my_getnbr(str);
    double temp;

    while (part_entiere != 0) {
        part_entiere = part_entiere / 10;
        count += 1;
    }
    temp = rounded_nbr(nbr, getnbr, count);
    result = temp * my_compute_power_rec(10, count);
    show_float(count, getnbr, result);
   
    return count + getnbr;
}
