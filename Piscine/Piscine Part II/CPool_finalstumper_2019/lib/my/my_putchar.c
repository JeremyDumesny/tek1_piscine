/*
** EPITECH PROJECT, 2019
** Putchar
** File description:
** oui
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
