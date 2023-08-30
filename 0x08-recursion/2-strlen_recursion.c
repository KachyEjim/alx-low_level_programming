#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: string to be size checked
 *
 * Returns: returns count
 *
 */


int _strlen_recursion(char *s)
{
	int count = 0;

	if (!*s)
	{
		return (count);
	}

	count = _strlen_recursion(s + 1);
	return (++count);

}
