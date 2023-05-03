#include "main.h"
/**
 *puts2 - prints every other character of a string
 *@str: string input
 * Return: 0
 */

void puts2(char *str)
{
int L = 0;
int i = 0;
char *n = str;
int m;

while (*n != '\0')
{
n++;
L++;
}
i = L - 1;

for (m = 0 ; m <= i ; m++)
{
if (m % 2 == 0)
{
_putchar(str[m]);
}
}
_putchar('\n');
}
