/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** Write a function that counts and returns the number
** of characters found in the string passed as parameter.
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
