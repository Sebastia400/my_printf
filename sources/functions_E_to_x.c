/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/bsprintf.h"


void print_type_E (long unidades, double value, int elevatmenys, int i)
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
        if (i <= 9)
            my_putchar('0');

        my_put_nbr(i);
}

double check_neg(double value)
{
    if (value < 0) {
        my_putchar('-');
        value *= -1;
    }
    return (value);
}

void function_E(va_list list)
{
    int i = 0;
    double value = va_arg(list, double);
    long unidades = 0;
    long decimales = 0;
    int elevatmenys = 0;

    value = check_neg(value);
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
    print_type_E(unidades, value, elevatmenys, i);
}

void print_type_f (long unidades, float value, int i)
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
}

void function_f(va_list list)
{
    double value = va_arg(list, double);
    int i = 0;
    long unidades = 0;
    long decimales = 0;

    if (value < 0) {
        my_putchar('-');
        value *= -1;
    }
    unidades = value;
    print_type_f(unidades, value, i);
}