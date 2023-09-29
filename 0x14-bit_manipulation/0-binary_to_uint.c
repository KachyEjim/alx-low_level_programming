#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 *
 * @b: string containing 0 and 1 chars
 *
 * Return:converted number, or 0
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d;

	d = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		d <<= 1;
		if (b[i] == '1')
			d += 1;
	}
	return (d);
}
