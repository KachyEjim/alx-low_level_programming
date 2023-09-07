#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: The number of elements in the array
 * @size: size of each element
 *
 * Return: returns a pointer
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *ptr;

	if (nmemb  <= 0|| size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return (0);
	
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
