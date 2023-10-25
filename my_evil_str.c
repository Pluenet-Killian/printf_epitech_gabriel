/*
** EPITECH PROJECT, 2023
** MY_EVIL_STR
** File description:
** swap each letters
*/

char *my_evil_str(char *str)
{
    int i;
    int m = 0;
    char temp;

    m = my_strlen(str);
    for (i; i < m / 2; i++) {
        temp = str[i];
        str[i] = str[m - 1 - i];
        str[m - 1 - i] = temp;
    }
    return str;
}
