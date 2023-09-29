#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, temp;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	d = 1 << index;
	temp = n & d;
	if (temp == d)
		return (1);

	return (0);
}
