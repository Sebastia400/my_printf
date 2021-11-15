/*
** EPITECH PROJECT, 2021
** rush3
** File description:
** identify rush1
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "./include/my.h"

int do_op(char **buff, int x, int y);
void none();

int x_counter(char *buff)
{
    int i = 0;

    while (buff[i] != '\0' && buff[i] != '\n') {
        i++;
    }
    return (i);
}

int y_counter(char *buff)
{
    int i = 0;
    int n = 0;

    while (buff[i] != '\0') {
        if (buff[i] == '\n')
            n++;
        i++;
    }
    return (n);
}

char **rush3(char *buff, int x, int y)
{
    char **str;
    int i = 0;
    int f = 0;
    int c = 0;

    str = malloc(sizeof(char *)*(y + 1));
    while (buff[i] != '\0') {
        str[f] = malloc(sizeof(char) * (x + 1));
        c = 0;
        while(buff[i] != '\n') {
            str[f][c] = buff[i];
            c++;
            i++;
        }
        str[f][c] = '\0';
        i++;
        f++;
    }
    return (str);
}

int check_inv(char *buff)
{
    char str[] = "Invalid size";
    int i = 0;

    while (buff[i] != '\0') {
        if (buff[i] != str[i])
            return (1);
        i++;
    }
    return (0);
}


int main()
{
    char buff[BUFSIZ + 1];
    int offset = 0;
    int len;
    int x;
    int y;

    while ((len = read(0 , buff + offset , BUFSIZ - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';

    x = x_counter(buff);
    y = y_counter(buff);
    if (len < 0 || check_inv(buff) == 0 || x > 90 || y > 90) {
        none();
        return (84);
    }
    //x = x_counter(buff);
    //y = y_counter(buff);
    do_op(rush3(buff, x, y), x, y);
    return (0);
}
