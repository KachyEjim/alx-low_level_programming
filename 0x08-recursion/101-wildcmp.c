#include "main.h"

/**
 * checker - check if s1 and s2 are identical.
 *
 * @s1: first string
 * @s2: second string
 * @x: s1 string index
 * @y: s2 string index
 *
 * Return: 1 if s1 and s2 can be considered
 * indentical returns 0 otherwise.
 *
 */

int checker(char *s1, char *s2, int x, int y)
{
	if (s1[x] == '\0' && s2[y] == '\0')
		return (1);

	if (s1[x] == s2[y])
		return (checker(s1, s2, x + 1, y + 1));

	if (s1[x] == '\0' && s2[y] == '*')
		return (checker(s1, s2, x, y + 1));

	if (s2[y] == '*')
		return (checker(s1, s2, x + 1, y) || checker(s1, s2, x, y + 1));
	return (0);
}

/**
 * wildcmp - checks if strings could be considered identical
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 1 if are considered identical.
 *
 */

int wildcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;

	return (checker(s1, s2, x, y));
}
