#include "main.h"

/**
 * print_line - prints n number of lines
 *
 * @n: number of lines to be printed
 * i: counter
 *
 */



void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
