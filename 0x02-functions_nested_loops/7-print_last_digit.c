#include "main.h"

/**
 * print_last_digit - Entry point.
 * description: Prints the last digit of a number.
 *
 * @n: The number.
 * last_digit: stores the last digit
 *
 * Return: returns the value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	//if (n < 0)
	//	n = -n;

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
