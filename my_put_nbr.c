/*
** EPITECH PROJECT, 2023
** MY_PUT_NBR
** File description:
** my put nbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int i = 0;
    int r = 0;
    int m = 10;
    int s = 1;
    int k = 0;

    while (i != nb) {
        r = nb % m;
        s = s * 10;
        m = m * 10;
        k += 1;
        i = r;
    }
    m = 10;
    s = 10;
    for (i = k; i > 0; i--) {
        r = nb % my_compute_power_rec(m, i) / my_compute_power_rec(s, i - 1);
        my_putchar(r + 48);
    }
    k = 0;
}
