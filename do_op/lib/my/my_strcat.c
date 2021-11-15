/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** Write a function that concatenates two strings.
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int n = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[n] != '\0'){
        dest[n] = src[n];
        n++;
    }
    dest[i+n] = '\0';
    return (dest);
}
