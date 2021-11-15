/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** Reproduce the behavior of the str n cmp function.
*/

#include "../../include/my.h"

char *my_strncpy(char *dest , char const *src, int n)
{
    int i = 0;
    while ( i < n && *src != '\0') {
        dest[i] = *src;
        src++;
        i++;
    }
    if (n > i) {
        dest[i] = '\0';
    } return (dest);
}
