#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int result, a, b;

if ((isdigit(argv[1]) == 0 || isdigit(argv[2]) == 0))
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a + b;
printf("%d\n", result);
return (0);
}
}
