#include "main.h"
/**
 *rev_string - prints a string, in reverse, followed by a new line
 *@s: string
 *Return: 0
 */

void  rev_string(char *s)
{
char RS = s[0];
int L = 0;
int i;

while (s[L] != '\0')
{
L++;
}
for (i = 0; i < L; i++)
{
L--;
RS = s[i];
s[i] = s[L];
s[L] = RS;
}
}
