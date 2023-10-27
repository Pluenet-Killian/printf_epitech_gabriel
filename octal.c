/*
** EPITECH PROJECT, 2023
** OCTAL
** File description:
** octal
*/

#include "my.h"
#include "flags.h"

int compute_octal(int nbr)
{
    int i = 0;
    int rest = 0;
    int l = 0;
    int len_str;
    char base_octal[] = "01234567";
    char *str2 = malloc(sizeof(char) * 80000);

    while (nbr != 0) {
        rest = nbr % 8;
        str2[l] = base_octal[rest];
        l += 1;
        nbr = nbr / 8;
    }
    len_str = my_strlen(str2);
    for (i = len_str; i > 0; i--) {
        my_putchar(str2[i - 1]);
    }
    return l;
}
