/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** Reproduce the behavior of the str cmp function.
*/

#include <string.h>
#include "../../include/my.h"

char my_strcmp (char const *s1 , char const *s2)
{
    int Comparation = strcmp (s1 , s2);
    return (Comparation);
}
