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
	int c = 0;

	while (c <= 9)
	{
		int r = 0;

		while (r <= 9)
		{
			int i = c * r;

			if (i > 9)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else
			{
				_putchar('0' + i);
			}
			if (r < 9 && i > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (r < 9 && i <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (r >= 9)
			{
				_putchar('\n');
			}
			r++;
		}
		c++;
	}
}
