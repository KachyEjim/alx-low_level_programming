#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: size of the memory to be allocated
 *
 * Return: returns a void pointer
 *
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == 0)
		exit(98);
	return (mem);
}
