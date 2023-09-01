#include "main.h"

/**
 * _islower - Entry point
 * description: Checks if input is lowercase
 *
 * @character: character to be checked
 *
 * Return: returns 1 if c is lower reurns 0 otherwise
 */

int _islower(int character)
{
	if (character >= 'a' && character <= 'z')
		return (1);

	return (0);
}
