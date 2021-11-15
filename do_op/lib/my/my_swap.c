/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** Write a function that swaps the content of two integers,
** whose addresses are given as a parameter.
*/

#include "../../include/my.h"

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
