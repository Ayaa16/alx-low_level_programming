#include "main.h"
/**
 *_strlen_recursion -  function that returns the length of a string.
 *@s:input
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int leng = 0;

if (*s)
{
leng++;
leng += _strlen_recursion(s + 1);
}
return (leng);
}
