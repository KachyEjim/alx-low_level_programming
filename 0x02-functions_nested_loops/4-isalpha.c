#include "main.h"

/**
 * _isalpha - Entry point
 * description: Checks for alphabets
 *
 * @i: parameter that stores input to ber checked
 *
 * Return: returns 1 if i is an alphabet and 0 otherwise
 */

int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);

	return (0);
}
