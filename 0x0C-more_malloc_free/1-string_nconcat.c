#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *sout;
unsigned int ss1, ss2, ssout, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (ss1 = 0; s1[ss1] != '\0'; ss1++)
for (ss2 = 0; s2[ss2] != '\0'; ss2++)
if (n > ss2)
n = ss2;
ssout = ss1 + n;
sout = malloc(ssout + 1);
if (sout == NULL)
return (NULL);
for (i = 0; i < ssout; i++)
if (i < ss1)
sout[i] = s1[i];
else
sout[i] = s2[i - ss1];
sout[i] = '\0';
return (sout);
}
