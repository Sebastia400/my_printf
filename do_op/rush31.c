/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** structures to work with
*/

#include "./include/my.h"
#include <unistd.h>

void none()
{
    write(2, "none\n", 5);
}

void printelements(int num, int x, int y)
{
    my_putstr("[rush1-");
    my_put_nbr(num);
    my_putstr("] ");
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
}
