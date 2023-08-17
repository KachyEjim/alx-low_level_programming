#include "main.h"

/**
 * more_numbers - prints digits from 0 to 14,10 times
 *
 * i: stores line count
 * digit: stores the digits
 *
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int digit = 0;
		while (digit <= 14)
		{
			if (digit >= 10)
				_putchar('0' + (digit / 10));

			_putchar('0' + (digit % 10));
			digit++;
		}
		i++;
		_putchar('\n');
	}
}
