#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - rints numbers, followed by a new line.
 * @separator: input string
 * @n: number of integers
 * @...: variable numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list(PT);
unsigned int i;
va_start(PT, n);
for (i = 0; i < n; i++)
printf("%d", va_arg(PT, int));
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
printf("\n");
va_end(PT);
}
