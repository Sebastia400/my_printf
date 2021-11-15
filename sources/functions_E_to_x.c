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
        if(i <= 9)
            my_putchar('0');     
        my_put_nbr(i);
}

void function_E(va_list list)
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
    }
    else {
        while (unidades < 1 || unidades > 9) {
            value /= 10;
            unidades = value;
            i++;
        }
    }
    print_type_E(unidades,value,elevatmenys, i);
}

void print_type_f (long unidades, double value, int i)
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
    //int elevatmenys = 0;
    
    if (value < 0) {
        my_putchar('-');
        value *= -1;
    }
    unidades = value;
    print_type_f(unidades,value, i);
}


void function_g(va_list list)
{
    double value = va_arg(list, double);

    if (value < 0.0001 || value > 100000)
        my_printf("%e", value);
    else
        my_printf("%f", value);

}

void function_G(va_list list)
{
    double value = va_arg(list, double);

    if (value < 0.0001 || value > 100000)
        my_printf("%E", value);
    else
        my_printf("%f", value);
}

void function_x(va_list list)
{
    long decimalnum = va_arg(list, long);
    long quotient, carry;
    int i = 0; 
    int j = 0;
    char hexadecimalnum[100];

    if (decimalnum != 0) {
        if (decimalnum < 0)
            decimalnum = 4294967295 + (decimalnum + 1);
        quotient = decimalnum;
    
        while (quotient != 0) {
            carry = quotient % 16;
            if (carry < 10)
                hexadecimalnum[j++] = 48 + carry;
            else
                hexadecimalnum[j++] = 87 + carry;
            quotient = quotient / 16;
        }
    } else 
        hexadecimalnum[0] = '0';
    my_putstr(my_revstr(hexadecimalnum));
}
