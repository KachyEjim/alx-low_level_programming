#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings passed to the function 
 *
 * @separator: A string that is used to separate strings
 * @n: number of elements pasede
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	if (separator == 0)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == 0)
			str = "(nil)";

		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
