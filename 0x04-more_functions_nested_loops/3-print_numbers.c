#include "main.h"

/**
 * print_numbers - prints digits 0-9
 *
 * digit: stores the digit
 *
 */

void print_numbers(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
