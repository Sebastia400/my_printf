/*
** EPITECH PROJECT, 2021
** readexp
** File description:
** read all the expresion
*/
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "bistromatic.h"

int wrong_base(char *num, char *op) // same char in the two base
{
    int i = 0;
    int j = 0;

    while (op[i] != '\0') {
        j = 0;
        while (num[j] != '\0') {
            if (num[j] == op[i])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

char *from_base2(char *exp, char *op)
{
    int i = 0;
    int j = 0;
    char base_op[] = "()+-*/%";

    while (exp[i] != '\0') {
        j = 0;
        while (op[j] != '\0') {
			if (exp[i] == op[j]) {
                exp[i] = base_op[j];
            }
            j++; 
        }
        i++;
    }
    return (exp);
}

char *from_base(char *exp, char *num, char *op)
{
    int i = 0;
    int j = 0;
    char base_num[] = "0123456789";

    while (exp[i] != '\0') {
        j = 0;
        while (num[j] != '\0') {
            if (exp[i] == num[j]) {
                exp[i] = base_num[j];
            }
            j++; 
        }
        i++;
    }
    return (from_base2(exp, op));
}

char *to_base(char *exp, char *num, char *op)
{
    int i = -1;
    int j = 0;
    int inbase = 0;
    char base_op[] = "()+-*/%";
    char base_num[] = "0123456789";

    while (exp[++i] != '\0') {
	    j = 0;
	    while (base_num[j] != '\0') {
                if (exp[i] == base_op[j]) {
                    exp[i] = op[j];
                    inbase = 1;
                } else if (exp[i] == base_num[j]) {
	    	        exp[i] = num[j];
                    inbase = 1;
                }
                j++;
            }
	    if (inbase == 0)
	        return (SYNTAX_ERROR_MSG);
        inbase = 0;
    }
    return (exp);
}
