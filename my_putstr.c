/*
** EPITECH PROJECT, 2023
** MY_PUTSTR
** File description:
** display one by one strings
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return i;
}
