#include "main.h"

/**
 * _islower - Entry point
 * description: Checks if input is lowercase
 *
 * c: character to be checked
 *
 * Return: returns 1 if c is lower reurns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
