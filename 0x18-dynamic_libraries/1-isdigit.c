#include "main.h"

/**
 * _isdigit - checks if c is uppercase
 *
 * @c: character to be checked
 *
 * Return: i if digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
