
/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** Write a function that reverses a string.
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int n = my_strlen(str);
    char temp[n];

    n--;
    while (str[i] != '\0'){
        temp[n] = str[i];
        i++;
        n--;
    }
    while (n != i) {
        str[n] = temp[n];
        n++;
    }
    return (str);
}
