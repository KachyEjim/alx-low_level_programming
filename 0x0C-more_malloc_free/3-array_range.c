#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: start
 * @max: stop
 *
 * Return: returns a pointer
 *
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (0);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == 0)
		return (0);

	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = i + min;
	}
	return (ptr);
}
