/*
** EPITECH PROJECT, 2021
** my_str_islower.c
** File description:
** Write a function that returns 1 if the string passed as parameter
** only contains lowercase alphabetical characters and 0 otherwise.
*/

#include "../../include/my.h"

int my_str_lower (char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if ( str[i] < 'a' || str[i] > 'z')
            return (0);
        i++;
    } if (i == 0) {
        return (0);
    } else {
        return (1);
    }
}
