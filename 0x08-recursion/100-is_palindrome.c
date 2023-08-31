#include "main.h"

/**
 * len - returns the length of a string.
 *
 * @s: the string to be length checked
 *
 * Return: the length of string
 *
 */

int len(char *s)
{
	if (s[0] != '\0')
		return (1 + len(s + 1));

	return (0);
}

/**
 * palindrome_checker - checks if s is palindrome.
 *
 * @s: string to be checked.
 * @x: left half.
 * @y: rigth half.
 *
 * Return: 1 if s is palindrome 0 otherwise.
 *
 */

int palindrome_checker(char *s, int x, int y)
{
	if (s[x] == s[y])
	{
		if (x > y / 2)
			return (1);

		else
			return (palindrome_checker(s, x + 1, y  - 1));
	}

	else
		return (0);

}

/**
 * is_palindrome - check if s is palindrome
 *
 * @s: string to be checked.
 *
 * Return: 1 if n is prime 0 otherwise.
 *
 */

int is_palindrome(char *s)
{
	int x = 0;
	int y;

	y = len(s) - 1;
	return (palindrome_checker(s, x, y));
}
