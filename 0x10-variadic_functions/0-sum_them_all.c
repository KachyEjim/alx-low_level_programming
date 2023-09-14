#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of elements passed
 *
 * Return: return 0 if n == 0, sum other wise.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
