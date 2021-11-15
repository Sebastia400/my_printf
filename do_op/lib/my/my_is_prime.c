/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** Write a function that returns 1 if the number is prime and 0 if not.
*/

#include <limits.h>
#include "../../include/my.h"

int my_is_prime (int nb)
{
    int	i = 0;

    while ((i < nb  && nb % 2 == 0) || nb > INT_MAX || nb < INT_MIN){
        i++;
        return (0);
    }
    return (1);
}
