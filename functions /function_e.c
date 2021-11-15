/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-printf
** File description:
** function_e.c
*/

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
        decimales = value % 10;
        printf("%d\n", decimales);
        my_put_nbr(unidades);
        my_putchar('.');
        my_put_nbr(decimales);
        my_putstr("e-");
        my_put_nbr(i);
}