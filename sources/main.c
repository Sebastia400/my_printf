/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-printf
** File description:
** main.c
*/

#include "./../includes/bsprintf.h"

int main ()
{
    char str[] = "hola";
    str[1] = 3;

    //long numero = 4294967295 - (num + 1);

    printf("hola1: %S", str);
    my_printf("hola %S\n", str);
    return(0);
}