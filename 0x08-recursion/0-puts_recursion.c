#include "main.h"

/**
 * _puts_recursion - print a string
 *
 * @s: string to be printed
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar(10);
	}
}

