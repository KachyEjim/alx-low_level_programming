#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat -  concatenates two strings
 *
 * @s1: firt string
 * @s2: second string
 *
 * Return: returns concat
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int t1 = 0, t2 = 0, i = 0, j = 0;

	if (s1 != NULL)
	{
		while (s1[t1])
			t1++;
	}

	if (s2 != NULL)
	{
		while (s2[t2])
			t2++;
	}

	concat = (char *) malloc(sizeof(char) * (t1 + t2 + 1));

	if (!concat)
		return (0);

	for (i = 0; i < t1; i++)
		concat[i] = s1[i];

	for (j = 0; i < t1 + t2; i++, j++)
		concat[i] = s2[j];

	concat[t1 + t2 + 1] = '\0';
	return (concat);

}
