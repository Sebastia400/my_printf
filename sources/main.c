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
    double num = 34567.43;
    //long numero = 4294967295 - (num + 1);

    //printf("hola1:%E", 123456789.0);
    my_printf("hola %B\n", 10);
    return(0);
}
