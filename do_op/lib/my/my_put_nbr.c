/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** Write a function that displays the number given as a parameter
** it must be able to display all the possible values of an int.
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int i = 1;
    int n = nb;

    if (n < 0) {
        my_putchar('-');
        my_put_nbr(nb * -1);
        return (0);
    }
    while (n > 9) {
        n = n / 10;
        i = i * 10;
    }
    while (i >= 1) {
    my_putchar(((nb / i) % 10) + '0');
    i = i / 10;
    }
    return (0);
}
