/*
** EPITECH PROJECT, 2021
** my_sort_int_array.c
** File description:
** Function that sorts an integer array.
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar (char c);

void my_sort_int_array(int *array, int size)
{
    int temp = 0;
    int i = 0;
    int j = 0;
    int h = 0;

    while (i < size) {
        j = i + 1;
        while (j < size) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            j++;
    }
        i++;
    }
    while (h < size) {
        int result = array[h] + 48;
        my_putchar(result);
        h++;
    }
}
