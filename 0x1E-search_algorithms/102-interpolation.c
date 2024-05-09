#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high = size - 1, low = 0;

	if (!array)
		return (-1);

	while (high >= low)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
						(value - array[low]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;

	}
	return (-1);
}
