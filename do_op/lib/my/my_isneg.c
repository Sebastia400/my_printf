/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** Write a function that displays either N if the
** integer passed as parameter is negative or
** P, if positive or null.
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c);

int my_isneg(int n) {
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
