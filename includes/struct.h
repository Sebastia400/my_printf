/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** structures to work with
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <unistd.h>

void none();
void printelements(int num, int x, int y);

typedef struct do_op
{
    char op;
    void (*ptr)(va_list list);
} calculator;

#endif
