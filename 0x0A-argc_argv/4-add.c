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
int main(int argc, char *argv[])
{
int result, a, b;

if ((isdigit(argv[argc]) && isdigit(argv[argc]))
{
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a + b;
printf("%d\n", result);
return (0);
}
else if ((isdigit(argv[argc]) || isdigit(argv[argc]))
{
printf("Error\n");
return (1);
}
}
