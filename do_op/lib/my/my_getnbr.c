/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** retun num
*/

#include "../../include/my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int isneg = 1;
    int nb = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            isneg = isneg * -1;
            i++;
        }
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i++;
        } else {
            return (nb * isneg);
        }
    }
    return (nb * isneg);
}