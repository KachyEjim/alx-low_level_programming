#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string to be word capitalized
 *
 * Return: returns s
 *
 */

char *cap_string(char *s)
{
	char *sep;
	int i, j;

	sep = " \t\n,;.!?\\\"(){}";
	i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (s[i - 1] == sep[j])
				{
					s[i] = s[i] - 32;
					break;
				}
			}
		}

	}
	return (s);
}
