#include "main.h"

/**
 * leet -  encodes a string into 1337.
 *
 * @s: string to be encoded
 *
 * Return: returns s
 *
 */

char *leet(char *s)
{
	char *c;
	char *n;
	int i, j;

	c = "AaEeOoTtLl";
	n = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] ==  s[i])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
