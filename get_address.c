/*
** EPITECH PROJECT, 2023
** MY_PUT_PTR
** File description:
** Function to displays ptr
*/

#include "my.h"

unsigned long int my_put_hexa_unsi_long(unsigned long int nbr)
{
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

void get_address(unsigned long int ptr)
{
    my_putstr("0x");
    my_put_hexa_unsi_long(ptr);
    return;
}
