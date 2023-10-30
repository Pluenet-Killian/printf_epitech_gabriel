/*
** EPITECH PROJECT, 2023
** MY_FLOAT
** File description:
** my_float
*/

#include <stdio.h>
#include "my.h"

long int r_nbr_expo(double nbr, int getnbr, int count, long int result)
{
    long int rest = result / my_compute_power_rec(10, getnbr - 1);

    if (rest % 10 >= 5)
        result = result + my_compute_power_rec(10, getnbr);
    return result;
}

void show_exponent(int count, int getnbr, long int result)
{
    int i = 0;
    long int rest = 0;

    for (i = 0; i < getnbr + 1; i++) {
        rest = result % my_compute_power_rec(10, getnbr + count - i - 1) /
            my_compute_power_rec(10, getnbr + count - i - 2);
            my_putchar(rest + '0');
        if (i == getnbr) {
            my_putstr("e+");
            my_putchar('0');
            my_put_nbr(count - 1);
        }
        if (i == 0 && getnbr != 0)
            my_putchar('.');
    }
    my_putchar('\n');
}

int my_exponent(char const *str, double nbr)
{
    int count = 0;
    int part_entiere = (int)nbr;
    int first_part = (int)nbr;
    long int result = 0;
    double temp;
    int getnbr = my_getnbr(str);

     if (str[0] == '\0')
        getnbr = 6;
    while (part_entiere != 0) {
        part_entiere = part_entiere / 10;
        count += 1;
    }
    result = nbr * my_compute_power_rec(10, getnbr - 1);
    result = r_nbr_expo(nbr, count, getnbr, result);
    show_exponent(count, getnbr, result);
    return count + getnbr;
}
