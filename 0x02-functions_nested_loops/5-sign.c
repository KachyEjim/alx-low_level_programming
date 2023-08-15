#include "main.h"

/**
 * print_sign - Entry point
 * description: checks sign of a  number
 *
 * @i: parameter that stores the number to be checked
 *_putchar: function call, print +, 0, - according to numbers sign
 * Return: returns 1 if positive, 0 if zero and -1 if negative
 */

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
