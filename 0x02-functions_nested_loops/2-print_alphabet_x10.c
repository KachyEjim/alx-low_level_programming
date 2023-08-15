#include "main.h"

/**
 * print_alphabet - Prints lowercase char
 *
 * i: stores the letters
 * count: number of time to display alp
 * _putchar: function call to print char
 *
 */

void print_alphabet_x10(void)
{
	int i = 'a';
	int count = 0;

	while (count < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		count++;
		_putchar('\n');
	}
}
