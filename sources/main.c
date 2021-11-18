/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-printf
** File description:
** main.c
*/

#include "./../includes/bsprintf.h"

int main()
{
    char str[] = "hola";
    str[1] = 3;
    float num = 34567.5670;
    //long numero = 4294967295 - (num + 1);

    printf("printf:% E\n", num);
    my_printf("myprintf:% E\n", num);
    return(0);
}
