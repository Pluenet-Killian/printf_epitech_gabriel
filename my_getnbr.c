/*
** EPITECH PROJECT, 2023
** MY_GETBN
** File description:
** return an int as a string
*/

#include "my.h"

int condition_getnbr(char *str, int nb, int i, int k)
{
    while (str[i] >= 48 && str[i] <= 57) {
        nb = nb * 10 + (str[i] - '0');
        i += 1;
    }
    return nb;
}

int my_getnbr(char const *str)
{
    int i;
    int k;
    int p;
    int len_str;
    int minus;
    int nb;

    nb = 0;
    minus = 1;
    len_str = my_strlen(str);
    for (i = 0; i < len_str; i++) {
        if (str[i] >= 48 && str[i] <= 57 && k < 1) {
            nb = condition_getnbr(str, nb, i, k);
            k += 1;
        }
        if (str[i] == '-') {
            minus = -1;
        }
    }
    return nb * minus;
}
