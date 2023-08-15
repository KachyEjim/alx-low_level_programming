#include "main.h"

/**
 * times_table - Entry point
 * description: prints the 9 times table to stdout
 *
 * r: stores the rows
 * c: stores the columns
 * i: stores c * r
 *
 */

void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int result = row * column;

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
					_putchar('0' + result);
				}
				else
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);					
				}
			}
		}

		_putchar('\n');
	}
}
