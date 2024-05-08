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
	size_t low, high = 0, jump_size = sqrt(size);

	if (!array || size == 0)
		return (-1);


	while (array[high] < value && high < size)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		low = high;
		high += jump_size;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	high = high < (size - 1) ? high : size - 1;
	for (; low < high && array[low] < value; low++)
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	printf("Value checked array[%lu] = [%d]\n", low, array[low]);

	return (array[low] == value ? (int)low : -1);
}
