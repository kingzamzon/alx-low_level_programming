#include "main.h"

/**
 * print_alphabet  - this is the entry point
 * This scripts print the lowercase alphabet
 *
 * Return: Always (0)
*/

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}
