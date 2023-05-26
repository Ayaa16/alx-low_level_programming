#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - returns the sum of all its parameters
*@n: input numbers parameters
*@...: A variable number of paramters to calculate the sum of.
*Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list PTR;
int i = 0;
int sum = 0;

va_start(PTR, n);
for (i = 0; i < n; i++)
{
sum += va_arg(PTR, int);
}
va_end(PTR);
return (sum);
}
