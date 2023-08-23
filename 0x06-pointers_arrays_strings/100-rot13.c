#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @s: string to be encoded
 *
 * Return: returns s
 *
 */

char *rot13(char *s)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (alpha[j] == s[i])
			{
				s[i] = cipher[j];
				break;
			}
		}
	}
	return (s);
}
