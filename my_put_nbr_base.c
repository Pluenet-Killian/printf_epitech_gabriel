/*
** EPITECH PROJECT, 2023
** MY_PUT_NBR_BASE
** File description:
** my_put_nbr_base
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void compute_octal(int nbr)
{
    int i = 0;
    int j = 0;
    char base_octal[] = "01234567";
    int remainder[100];

    for (i; nbr >= 0; i++) {
        remainder[i] = nbr % 8;
        nbr = nbr / 8;
    }
    for (j = i - 1; j >= 0; j--)
        my_putchar(remainder[j]);
}

void compute_hexadecimal(int nbr) {
    int l = 0;
    int result = 0;
    int rest = 0;
    char hex_chars[] = "0123456789abcdef";
    char *str2 = malloc(sizeof(char) * 80000);

    while (nbr != 0) {
        rest = nbr % 16;
        str2[l] = hex_chars[rest];
        l += 1;
        nbr /= 16;
    }
    for (int i = l - 1; i >= 0; i--) {
        my_putchar(str2[i]);
    }
    free(str2);
}

int my_put_nbr_base(int nb, char const *base)
{
    compute_hexadecimal(nb);
    compute_octal(nb);
}
