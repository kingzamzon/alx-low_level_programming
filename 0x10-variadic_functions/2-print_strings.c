#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line.
 * @separator:  const char type : seperator
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list listarg;
char *ptr;

va_start(listarg, n);

for (i = 0; i < n; i++)
{
ptr = va_arg(listarg, char*);
if (ptr)
{
printf("%s", ptr);
}
else
printf("(nil)");
if (separator != NULL && (i < (n - 1)))
printf("%s", separator);
}
printf("\n");
va_end(listarg);
}
