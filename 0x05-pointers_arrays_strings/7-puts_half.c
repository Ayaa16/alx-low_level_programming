#include "main.h"
/**
 *puts_half - prints half of a string, followed by a new line.
 *@str: input string
 *Return: half length
 */

void puts_half(char *str)
{
int a, n;
int L = 0;

for (a = 0; str[a] != '\0'; a++)
L++;
n = (L / 2);
if ((L % 2) == 1)
n = ((L + 1) / 2);
for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
