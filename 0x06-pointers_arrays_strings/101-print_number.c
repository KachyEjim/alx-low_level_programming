#include "main.h"

/**
 * print_number -  prints an integer.
 *
 * @n: integer to be printed
 *
 */

void print_number(int n)
{
	int count;
	int i;
	int d;
	int temp;

	temp = n;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n  = n * -1;
		temp = n;
	}
	
	for (i = 0, count = 0; temp > 0; i++)
	{
		temp /= 10;
		count++;
	}

	for (i = 1, d = 1; i < count; i++)
	{
		d = d * 10;
	}

	while (d >= 1)
	{
		temp = n / d;
		n = n  % d;
		d = d / 10;
		_putchar(temp + '0');
	}
}
