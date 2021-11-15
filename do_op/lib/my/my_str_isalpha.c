/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** Write a function that returns 1 if the string is passed as
** parameter only contains alphabetical characters and 0 if
** the string contains another type of character.
*/

#include "../../include/my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if ( str[i] < 65 || (str[i] > 90 && str[i] <= 97) || str[i] >= 122)
            return (0);
        i++;
    } if (i == 0) {
        return (0);
    } else {
        return (1);
    }
}
