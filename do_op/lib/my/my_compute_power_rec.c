/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** Write an recursive function that returns the first
** argument raised to the power p, where p, is the second argument.
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    int i = 1;
    int original = nb;

    if (p == 0) {
        return (1);
    }
    if (p < 0 || nb == 2147483647) {
        return (0);
    }
    while (i < p) {
        i++;
        nb = original * my_compute_power_rec(nb, 1);
    }
    return (nb);
}
