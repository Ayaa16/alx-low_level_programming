#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 * @n: integer input number
 *
 * Return: 1 prints + if n is greater than zero , 0 if zero and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		 _putchar(45);
		 return (-1);
	}
}
