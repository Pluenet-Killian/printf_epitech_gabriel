/*
** EPITECH PROJECT, 2023
** MY_PUT_NBR
** File description:
** my put nbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int debut = 0;
    int fin = 0;

    fin = nb % 10;
    debut = nb / 10;
    if (debut != 0) {
        my_put_nbr(debut);
    }
    my_putchar(fin + '0');
}
