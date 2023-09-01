#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string to be checked
 * @accept: substring used for the check
 *
 * Return: returns count (number of bytes)
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int temp, i;
	int j = 0;

	while (s[j])
	{
		temp = 0;
		i = 0;
		while (accept[i])
		{
			if (accept[i] == s[j])
			{
				temp++;
				break;
			}

			i++;
		}
		if (temp < 1)
			return (count);
		count++;
		j++;
	}
	return (count);
}
