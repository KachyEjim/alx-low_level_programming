#include "main.h"

/**
 * print_alphabet_x10 - Entry pointt
 * description: prints lowercase letters
 *
 * i: stores the letters
 * count: number of time to display alp
 * _putchar: function call to print char
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		count++;
		_putchar('\n');
	}
}
