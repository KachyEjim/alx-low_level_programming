#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int a = 1, b = 2, next;

	printf("%lu, %lu, ", a, b);

	for (int i = 2; i < 98; ++i)
	{
		next = a + b;

		if (i != 97)
			printf("%lu, ", next);

		else
			printf("%lu\n", next);

		a = b;
		b = next;
	}
}
