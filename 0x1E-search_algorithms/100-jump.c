#include "search_algos.h"


/**
 * jump_search - a function that searches for a value in a
 *          sorted array of integers using the Jump search algorithm
 *
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of the element if found, otherwise, -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t j = sqrt(size), step;
	size_t prev = 0;

	step = j;
	if (!array)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	while (array[step] < value && step < size)
	{
		prev = step;
		step += j;
		if (prev < size)
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (; prev <= step && prev < size; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
