#include <stdarg.h>
/**
*sum_them_all - sums all given arguments
*@n: takes integer also a variable of argument list
*@...: ellipsis
*Return: sum of arguments
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list arg;
if (n == 0)
return (0);
va_start(arg, n);
for (i = 0; i < n; i++)
sum += va_arg(arg, int);
va_end(arg);
return (sum);
}
