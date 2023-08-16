#include <stdio.h>

/**
 * main - Entry point
 * description: prints the first 98 Fibonacci numbers
 *
 * a: store first number
 * b: stores second number
 * next: stores sum of a&b
 * i: used to calc iltrations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;
	int i;

	printf("%lu, %lu, ", a, b);

	for (i = 2; i < 98; ++i)
	{
		next = a + b;

		if (i != 97)
			printf("%lu, ", next);

		else
			printf("%lu\n", next);

		a = b;
		b = next;
	}
	return (0);
}
