#include "main.h"

/**
 * _islower -  check for lowercase letters
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
