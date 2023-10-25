/*
** EPITECH PROJECT, 2023
** MY_H
** File description:
** display the headers
*/

#ifndef MY_H
    #define MY_H

    #include <stdarg.h>

int my_compute_power_rec(int nb, int p);
int condition_result_square_root(int result);
int condition_one_square_root(int nb);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int is_prime(int nb);
int my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcapitalize(char *str);
int my_strcmp(char const *s1, char const *s2);
int condition_count2_strncmp(char const *s1, char const *s2, int i);
int condition_count_strcmp(char const *s1, char const *s2, int i);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int first_part_str_to_array(int i, int len, char const *str, int nb_words);
char *second_part_str_to_array(const char *str, int l, int p);
int my_str_islower(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmen(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char **my_str_to_word_array(char const *str);
void condition_adhesion(char *temp, char *str, int i);
int my_show_word_array(char const **tab);
int disp_str(va_list args);
int disp_char(va_list args);
int disp_perc(va_list args);
int disp_int_i(va_list args);
int disp_int(va_list args);

#endif
