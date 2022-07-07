#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_int - function print an int
 * @i: int to print
 * Return: void
 */
void print_int(va_list i)
{
printf("%d", va_arg(i, int));
}
/**
 * print_char - function print a char
 * @c: char to print
 * Return: void
 */
void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}

/**
 * print_string - function print a string
 * @s: string to print
 * Return: void
 */

void print_string(va_list s)
{
char *str = va_arg(s, char *);

if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * print_float - function print a float
 * @f: float to print
 * Return: void
 */

void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything : all inputs
 * @format: const pointer -list of argument types passed to the function
 * Return: void
 */
void print_all(const char *const format, ...)
{
oper_t list_format[] = {
{"c", print_char},
{"s", print_string},
{"i", print_int},
{"f", print_float},
{NULL, NULL}
};
va_list args;
unsigned int i = 0, j;
char *separator = "";
va_start(args, format);
i = 0;
while (format && format[i])
{
j = 0;
while (list_format[j].c != NULL)
{
if (*(list_format[j].c) == format[i])
{
printf("%s", separator);
list_format[j].fun(args);
separator = ", ";
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
