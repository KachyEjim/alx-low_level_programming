#include "main.h"

/**
 * l_length - checks length of *s
 *
 * @s: input para
 *
 * Return: returns i
 *
 */

int l_length(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++, s++)
	;

	return (i);
}

/**
 * rev_string - reverses *s strings
 *
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
	int start;
	int end;
	char temp;
	int len;

	len = l_length(s);

	for (start = 0, end = len - 1; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
	s[len] = '\0';
}
