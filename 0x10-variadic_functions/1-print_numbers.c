#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 *
 * @separator: pointer to the separator to be used
 * @n: number of elements passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (separator == 0)
		separator = "";

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1)
			printf("%s", separator);

	}
	printf("\n");

	va_end(numbers);
}
