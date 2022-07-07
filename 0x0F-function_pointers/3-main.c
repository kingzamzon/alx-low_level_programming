#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - program for calculation
 * @argc: arguments count
 * @argv: array of the arguments
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int (*ptr)(int, int);
int result, num1, num2;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

ptr = get_op_func(argv[2]);
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if (ptr == NULL)
{
printf("Error\n");
exit(99);
}
result = ptr(num1, num2);
printf("%d\n", result);
return (0);
}
