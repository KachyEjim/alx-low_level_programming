#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: pointer to the string
 *
 * Return: returns copy
 *
 */

char *_strdup(char *str)
{
	int i;
	int size = 1;
	char *copy;

	for (i = 0; str[i]; i++)
		size++;

	copy = (char *) malloc(sizeof(char) * size);

	if (copy == 0)
		return (0);

	for (i = 0; i <= size; i++)
		copy[i] = str[i];

	return (copy);

}
