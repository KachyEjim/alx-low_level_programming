#include "main.h"

/**
 * check_divisible - check for if input have a divisor
 *
 * @x: current divisor to be checked
 * @n: input number
 *
 * Return: returns 1 if x can divide n and zero otherwise
 */

int check_divisible(int x, int n)
{
	if (x * x > n)
		return (1);

	else if (n % x == 0)
		return (0);

	return (check_divisible(x + 1, n));
}

/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0
 *
 * @n: integer to be checked
 *
 * Return: returns 1 if number is prime and 0 otherwise
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else if (n == 2)
		return (1);

	return (check_divisible(2, n));
}
