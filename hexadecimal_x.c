/*
** EPITECH PROJECT, 2023
** HEXADECIMAL_X
** File description:
** hexadecimal_x
*/

#include "my.h"

void hexadecimal_x(int nbr)
{
    int l = 0;
    int result = 0;
    int rest = 0;
    char hex_chars[] = "0123456789ABCDEF";
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
