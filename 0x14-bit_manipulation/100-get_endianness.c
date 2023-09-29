#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 *
 * Return: 0 for big, 1 for little
 *
 */

int get_endianness(void)
{
	unsigned int temp = 1;
	char *c = (char *) &temp;

	return (*c);
}
