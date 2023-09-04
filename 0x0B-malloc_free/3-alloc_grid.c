#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: return array
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (0);

	array = (int **) malloc(sizeof(int) * height);

	if (array == 0)
		return (0);

	for (i = 0; i < width; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);

		if (array[i] == 0)
		{
			i--;
			for (; i <= 0; i--)
				free(array[i]);

			free(array);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
