/*
** EPITECH PROJECT, 2023
** MY_PUT_NBR_BASE
** File description:
** my_put_nbr_base
*/

#include "my.h"
#include <stdio.h>

int compute_rest(int nbr) {
    int result = nbr / 16;
    int rest = nbr - (result * 16);;
}

int my_put_nbr_base(int nbr, char const *base)
{
    int first = 0;
    int end = 0;
    end = nbr % 10;
    first = nbr / 10;
    if (first != 0) {
        my_put_nbr_base(first, base);
    }
    my_putchar(end + '0');
    compute_rest(nbr);
}
