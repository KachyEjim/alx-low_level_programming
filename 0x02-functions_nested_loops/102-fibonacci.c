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
	int a = 1;
	int b = 2;
	int next;

	printf("%d, %d", a, b);

	for (int i = 2; i < 50; i++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
