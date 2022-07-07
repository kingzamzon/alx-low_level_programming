#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *  print_numbers - prints numbers
 * @separator:  seperated between numbers
 * @n: number of arguements
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list givennumbers;

va_start(givennumbers, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(givennumbers, unsigned int));
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
va_end(givennumbers);
printf("\n");
}
