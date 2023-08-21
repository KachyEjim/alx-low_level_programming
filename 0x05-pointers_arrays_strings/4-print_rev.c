#include "main.h"

/**
 * length - checks length of *s
 *
 * @s: input para
 *
 * Return: returns i
 *
 */

int length(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++, s++)
	;

	return (i);
}

/**
 * print_rev - reverses *s strings
 *
 * @s: string to be reversed
 *
 */

void print_rev(char *s)
{
	int l;

	l = length(s);

	while (l >= 0)
	{
		_putchar(s[l - 1]);
		l--;
	}

	_putchar('\n');

}
