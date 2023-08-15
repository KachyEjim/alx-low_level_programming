#include "1-main.c"

/**
 * print_alphabet - Prints lowercase char
 *
 * i: stores the letters
 * _putchar: function call to print char
 *
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

}
