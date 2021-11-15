/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-printf
** File description:
** function_e.c
*/

#include "./../includes/bsprintf.h"
/*
void function_e(double value)
{
    int i = 0;
    int unidades = 0;
    int decimales = 0;

    unidades = value;
    if (unidades == 0) {
        while (unidades > 0) {
            value *= 10;
            unidades = value;
            i++;
        }
        decimales = (int)value % 10;
        printf("%d\n", decimales);
        my_put_nbr(unidades);
        my_putchar('.');
        my_put_nbr(decimales);
        my_putstr("e-");
        my_put_nbr(i);
    }
}

*/
/*
char print_type_x(va_list list)
{
    double value = va_arg(list, double);
    int lastvalue = 0;
    int i = 0;
    char save_final[65];
    char base_num[] = "0123456789abcdef";

    //itoa(value,save_final,10);
    //printf("%s\n"save_final);

    while ( value > 0 ) {
        lastvalue = value / 10;
        value %= 10;
        save_final[i] = base_num[lastvalue];
        i++;
    }
    printf("last: %s\n", save_final);
    
    return ('.');//from_base2(exp, op));
}*/
