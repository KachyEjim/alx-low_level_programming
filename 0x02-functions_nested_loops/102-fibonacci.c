#include <stdio.h>

/**
 * main - Entry point
 * description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * a: firstbnumber
 * b: second number
 * next: adding a&b to get next number
 *
 * Return: Always 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int next;
	int i;

	printf("%ld, %ld", a, b);

	for (i = 2; i < 50; i++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
