/*
** EPITECH PROJECT, 2023
** COMPUTE_POWER_REC
** File description:
** display power with recursive function
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p >= 1) {
        result = nb * my_compute_power_rec(nb, p - 1);
        return result;
    } else if (p == 0) {
        return 1;
    } else {
        return 0;
    }
}
