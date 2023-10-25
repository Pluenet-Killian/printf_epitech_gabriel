/*
** EPITECH PROJECT, 2023
** MY_STRLEN
** File description:
** put the length of the string
*/

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}
