/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/
#include <stdarg.h>

#include "./../includes/bsprintf.h"

void function_s(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}

void function_c(va_list list)
{
    my_putchar((int)va_arg(list, int));
}

void function_i_d(va_list list)
{
    my_put_nbr((int)va_arg(list, int));
}

void print_type_e (long unidades, double value, int elevatmenys, int i)
{
    int n = 0;

    value -= unidades;
    my_put_nbr(unidades);
    my_putchar('.');
    while (n != 6) {
        value *= 10;
        my_put_nbr((int)value % 10);
        n++;
    }
    my_putchar('e');
    if (elevatmenys)
        my_putchar('-');
    my_put_nbr(i);
}

void function_e(va_list list)
{
    int i = 0;
    double value = va_arg(list, double);
    long unidades = 0;
    long decimales = 0;
    int elevatmenys = 0;

    if (value < 0) {
        my_putchar('-');
        value *= -1;
    }
    unidades = value;
    if (unidades < 1) {
        while (unidades <= 0) {
            value *= 10;
            unidades = value;
            elevatmenys = 1;
            i++;
        }
    } else {
        while (unidades < 1 || unidades > 9) {
            value /= 10;
            unidades = value;
            i++;
        }
    }
    print_type_e(unidades, value, elevatmenys, i);
}
