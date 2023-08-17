#include "main.h"

/**
 * print_triangle - prints n size triangle
 *
 * @size: input size to be printed
 *
 */


void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j > size - i - 1; j++)
				_putchar(' ');

			for (j = 0; j <= size; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
