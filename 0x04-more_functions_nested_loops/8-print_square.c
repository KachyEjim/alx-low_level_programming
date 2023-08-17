#include "main.h"

/**
 * print_square - prints a square of n size
 *
 * @size: input parameter
 *
 */




void print_square(int size)
{
	int length;
	int width;

	if(size <= 0)
	{
		_putchar('\n');
	}

	for (length = 0; length < size; length++)
	{
		for (width = size; width > 0; width--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
