#include "main.h"
/**
*swap_int - swap values of 2 numbers
*@a: integer number
*@b: integer number
*Return: 0
*/

void swap_int(int *a, int *b)
{
int i;

i = *a;
*a = *b;
*b = i;
}

