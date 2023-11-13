#include "main.h"

/**
 * _strlen - get the length of *s
 *
 * @s: pointer parameter
 *
 * Return: returns i (len of *s)
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++, s++)
	;

	return (i);
}
