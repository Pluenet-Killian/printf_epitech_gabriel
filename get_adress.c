/*
** EPITECH PROJECT, 2023
** my_put_ptr.c
** File description:
** Function to displays ptr
*/

#include <stdlib.h>

void my_put_ptr(unsigned long int *ptr);
{
    my_putstr("0x");
    my_put_hexa_unsi_long(ptr);
}
