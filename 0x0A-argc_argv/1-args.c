#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc);
return (0);
}