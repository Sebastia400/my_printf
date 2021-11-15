/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** Write a function that puts every letter of every word in it in lowercase.
*/

#include "../../include/my.h"

char *my_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 65 || str[i] <= 90) {
            str[i] += 32;
        } i++;
    } return (str);
}
