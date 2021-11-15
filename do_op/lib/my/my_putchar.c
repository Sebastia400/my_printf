/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** Prints a character
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}
