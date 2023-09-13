#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to the array for the search
 * @size: number of elements in array
 * @cmp: a pointer to the function
 * to be used to compare values
 *
 * Return: returns -1 if no match or the
 * index of the array match
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
