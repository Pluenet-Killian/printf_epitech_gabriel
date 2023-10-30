/*
** EPITECH PROJECT, 2023
** displays_functions.c
** File description:
** All the functions for displaying the flags
*/

#include <stdarg.h>
#include "my.h"

int disp_str(va_list args)
{
    return my_putstr(va_arg(args, char *));
}

int disp_char(va_list args)
{
    my_putchar(va_arg(args, int));
    return 1;
}

int disp_perc(va_list args)
{
    my_putchar('%');
    return 1;
}

int disp_int_i(va_list args)
{
    return my_put_nbr(va_arg(args, int));
}

int disp_int(va_list args)
{
    return my_put_nbr(va_arg(args, int));
}
