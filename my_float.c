/*
** EPITECH PROJECT, 2023
** MY_FLOAT
** File description:
** my_float
*/

#include <stdio.h>
#include "my.h"

long int rounded_nbr_float(double nbr, int getnbr, int count, long int result)
{
    long int temp = nbr * my_compute_power_rec(10, getnbr);

    if (temp % 10 >= 5 && temp != result)
        result += 1;
    return result;
}

void show_float(int count, int getnbr, long int result)
{
    int i = 0;
    long int rest = 0;

    for (i = count + getnbr; i > 0; i--) {
        rest = result % my_compute_power_rec(10, i) /
            my_compute_power_rec(10, i - 1);
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

    if (str[0] == '\0')
        getnbr = 6;
    while (part_entiere != 0) {
        part_entiere = part_entiere / 10;
        count += 1;
    }
    result = nbr * my_compute_power_rec(10, getnbr);
    result = rounded_nbr_float(nbr, count, getnbr, result);
    show_float(count, getnbr, result);
    return count + getnbr;
}
