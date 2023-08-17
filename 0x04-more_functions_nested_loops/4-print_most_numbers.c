#include "main.h"

/**
 * print_most_numbers - prints digits exexpt 2&4
 *
 * digit: stores the digits to be printed
 *
 */

void print_most_numbers(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		if (digit != '2' && digit != '4')
			_putchar(digit);
		
		digit++;
	}
	_putchar('\n');
}
