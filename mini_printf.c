/*
** EPITECH PROJECT, 2023
** mini_printf.c
** File description:
** A simple version of printf
*/

#include <stdarg.h>
#include "my.h"

int flags_loop(char letter_flag, va_list args)
{
    int j = 0;
    int (*disp_fonctions[])(va_list args) = {&disp_char,
        &disp_perc, &disp_str, &disp_int, &disp_int_i};
    char flags[5] = "c%sdi";

    for (j; j < 5; j++) {
        if (flags[j] == letter_flag)
            return disp_fonctions[j](args);
    }
}

int mini_printf(const char *format, ...)
{
    int i = 0;
    va_list args;
    int count = 0;

    va_start(args, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i = i + 1;
            count += flags_loop(format[i], args);
        } else {
            my_putchar(format[i]);
            count ++;
        }
        i++;
    }
    va_end(args);
    return count;
}
