/*
** EPITECH PROJECT, 2021
** my_str_isupper.c
** File description:
** Write a function that returns 1 if the string passed as
** parameter only contains uppercase alphabetical characters and 0 otherwise
*/

#include "../../include/my.h"

int my_str_isupper(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if ( str[i] < 'A' || str[i] > 'Z')
            return (0);
        i++;
    } if (i == 0){
        return (0);
    } else {
        return (1);
    }
}
