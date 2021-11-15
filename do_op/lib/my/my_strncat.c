/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** Write a function that concatenates n characters of the
** src string to the end of the dest string.
*/

#include "../../include/my.h"

char *my_strncat(char *dest , char const *src , int nb)
{
    int i = 0;
    int n = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (n != nb){
        dest[i] = src[n];
        i++;
        n++;
    }
    dest[i] = '\0';
    return (dest);
}
