#include "main.h"
/**
 *_islower -function prints alphabets in lowercase
 *c is the char in ASCII code
 * Return: 1 is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{	
		return (0);
	}
	-_putchar('\n');
}
