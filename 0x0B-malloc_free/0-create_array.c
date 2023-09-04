#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * , and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character to be used for initialization
 *
 * Return: returns a pointer to output
 * 0 otherwise
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *output;

	if (size <= 0)
		return (0);

	output = (char *)malloc(sizeof(char) * size);

	if (output == 0)
		return (0);

	for (i = 0; i < size; i++)
		output[i] = c;

	return (output);

}
