#include "main.h"

/**
 * _memset - sets the memory location pointed
 * to by s to a constant char b
 *
 * @s: memory location to be resigned to a new value
 * @b: constant char to be used for the assignment
 * @n: size of s tp be replaced
 *
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
