#include"main.h"
/**
 *print_alphabet_x10 - function prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
  int n; 
  int m;
      
for (m = 1; m <= 10; m++)
{
for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
_putchar('\n');		
}
}
