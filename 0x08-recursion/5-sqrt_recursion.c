#include "main.h"

/**
 * p_sqrt_check - checks for a potential square root
 *
 * @x: number to be checked for potential sqrt
 * @n: the number int
 *
 * Return: returns the sqrt of n or -1
 *
 */
int p_sqrt_check(int x, int n)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (p_sqrt_check(x + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (p_sqrt_check(1, n));
}
