#include "main.h"

/**
 * print_times_table - Entry point
 * description: prints the 9 times table to stdout
 *
 * @n: input parameter
 * r: stores the rows
 * c: stores the columns
 * i: stores c * r
 *
 */

void print_times_table(int n)
{
	int row, column, result, temp;

	if (n < 0 || n > 15)
		return;
	for (row = 0; row <= n ; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;
			if (column == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result > 9 && result < 100)
				{
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				else
				{
					temp  = result / 10;
					_putchar('0' + temp / 10);
					_putchar('0' + temp % 10);
					_putchar('0' + result % 10);
				}
			}
		}
		_putchar('\n');
	}
}
