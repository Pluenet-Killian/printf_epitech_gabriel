/*
** EPITECH PROJECT, 2023
** OCTAL
** File description:
** octal
*/

#include "my.h"
#include "flags.h"

void compute_octal(int nbr)
{
    int i = 0;
    int j = 0;
    int rest = 0;
    int l = 0;
    char base_octal[] = "01234567";
    char *str2 = malloc(sizeof(char) * 80000);
    while (nbr != 0) {
        rest = nbr % 8;
        str2[l] = base_octal[rest];
        my_putchar(str2[l]);
        l += 1;
        nbr = nbr / 8;
    }
}
