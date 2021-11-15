/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** Write a function that returns the square root
** (if it is a whole number) of the number given as argument.
** If the square root is not a whole number, the function should return 0.
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c);

int checker(int square, int divider){
    if (divider * divider != square){
        return (0);
    } else {
        return (divider);
    }
    return (1);
}

int my_compute_square_root(int nb) {
    int i = 1;
    int divider = 0;

    while (i != nb) {
        if (nb / i == i) {
            divider = checker(nb, i);
        }
        i++;
    }
    return (divider);
}
