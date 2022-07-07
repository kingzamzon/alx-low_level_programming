#ifndef VARIADICFUN_H
#define VARIADICFUN_H
#include <stdarg.h>
/**
 * struct oper - pointer to print all
 *
 * @c: pointer to input
 * @fun: pointer to function
 */
typedef struct  oper
{
char *c;
void (*fun)(va_list);
} oper_t;
int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
